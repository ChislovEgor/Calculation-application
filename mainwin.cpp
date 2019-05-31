#include "mainwin.h"
#include "ui_mainwin.h"
#include "bookfile.h"
#include <QLabel>

static int n = 0;       //глобальная переменная



MainWin::MainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWin)
{
    ui->setupUi(this);
    QLabel *labels[] = {ui->label_x1, ui->label_y1, ui->label_x2, ui->label_y2, ui->label_x3, ui->label_y3,
                        ui->label_x4, ui->label_y4, ui->label_x5, ui->label_y5, ui->label_x6, ui->label_y6,
                        ui->label_x7, ui->label_y7, ui->label_x8, ui->label_y8};                    //массив из лейблов для удобства

    QLineEdit *lineEdits_c[] = {ui->lineEdit_x1, ui->lineEdit_y1, ui->lineEdit_x2, ui->lineEdit_y2, ui->lineEdit_x3, ui->lineEdit_y3,
                              ui->lineEdit_x4, ui->lineEdit_y4, ui->lineEdit_x5, ui->lineEdit_y5, ui->lineEdit_x6, ui->lineEdit_y6,
                              ui->lineEdit_x7, ui->lineEdit_y7, ui->lineEdit_x8, ui->lineEdit_y8}; // массив из полей ввода/вывода для удобства


    for (int i = 0; i < 16; i++)            //заполнение переменной класса чтобы не создавать массив в каждой функции
    {                                       //а++ тоже самое что и а = а + 1
       lineEdits[i] = lineEdits_c[i];
    }

    ui->spinBox->setRange(2,8);             //область работы счетчика от 2 до 8
    ui->spinBox->setFocusPolicy(Qt::NoFocus);       //запрет на изменение счетчика с клавиатуры
    n = ui->spinBox->value();                       // глабальная переменная равна нынешней цифре на счетчике
    for (int k = 0; k < n*2; k++)    //выставление ограничения в поля ввода координат от 1-х коодинат ХУ до нынешнего значения на счетчике
    {
        lineEdits[k]->setValidator(new QIntValidator(-15,15,this)); //ограничения на ввод поле (целое число от -15 до 15)
    }
    for (int i = n*2; i < ui->spinBox->maximum()*2; i++) //выставление ограничения на видимость объектов и ввода в поле координат от нынешнего значения+1 до максимального
    {
        labels[i]->setVisible(false);           //убираем видимость лейбла
        lineEdits[i]->setVisible(false);        //убираем видимость строки ввода
        lineEdits[i]->setValidator(new QIntValidator(-15,15,this)); //ограничения на ввод в поле (целое число от -15 до 15)
    }
}

MainWin::~MainWin()
{
    delete ui;
}

void MainWin::on_spinBox_valueChanged(int arg1)  // при изменении цифры на счетчике
{
    QLabel *labels[] = {ui->label_x1, ui->label_y1, ui->label_x2, ui->label_y2, ui->label_x3, ui->label_y3,
                        ui->label_x4, ui->label_y4, ui->label_x5, ui->label_y5, ui->label_x6, ui->label_y6,
                        ui->label_x7, ui->label_y7, ui->label_x8, ui->label_y8}; //массив из лейблов для удобства

    while (n != arg1)           //пока нынешнее количество видимых полей для ввода координат точек (n) не ровняется цифре на счетчике
    {
    if (n > arg1)           //если их больше, то
        {
            lineEdits[(n-1)*2]->setVisible(false);      //прячем эти поля
            lineEdits[(n-1)*2+1]->setVisible(false);
            labels[(n-1)*2]->setVisible(false);
            labels[(n-1)*2+1]->setVisible(false);
            n--;                                    //умельшаем количество видимых полей на 1 (а-- тоже саоме что и а = а - 1)
        } else              //а если наоборот их меньше
        {
            labels[n*2]->setVisible(true);              //то делаем их видимыми
            labels[n*2+1]->setVisible(true);
            lineEdits[n*2]->setVisible(true);
            lineEdits[n*2+1]->setVisible(true);
            n++;                                    // и прибавляем количество видимых полей на 1
        }
    }
}

void MainWin::on_pushButton_clicked()   //при нажатии на кнопку "вычислить"
{
    double S = 0.0, P = 0.0;        //создание и обнуление переменных для подсчета плозади и периметра
    int xy = 0, yx = 0;             //создание и обнуление переменных для подсчета площади
    int mas[16];                    //создание массива для записи в него координат точек

    for (int i = 0; i < n*2; i++)        //запись в массив координат точек
    {
        mas[i] = lineEdits[i]->text().toInt();
    }

    //подсчет площади и периметра через точки координат по формулам
    for (int j = 0; j < n-1; j++)
    {
        xy+=(mas[j*2]*mas[(j+1)*2+1]);
        yx+=(mas[j*2+1]*mas[(j+1)*2]);
        P+=sqrt((mas[j*2]-mas[(j+1)*2])*(mas[j*2]-mas[(j+1)*2])+(mas[j*2+1]-mas[(j+1)*2+1])*(mas[j*2+1]-mas[(j+1)*2+1]));
    }
    S = (xy+mas[(n-1)*2]*mas[1]-yx-mas[0]*mas[(n-1)*2+1])/2;
    P+=sqrt((mas[(n-1)*2]-mas[0])*(mas[(n-1)*2]-mas[0])+(mas[(n-1)*2+1]-mas[1])*(mas[(n-1)*2+1]-mas[1]));


    if (S == 0.0)           //если площадь равна 0
    {
        P/= 2;              //то периметр уменьшаем в 2 раза, так как мы считали его как для фигуры а не для линии
    }
    if (S < 0)              //если площадь отрицательная
    {
        S*=-1;              // то меняем ее на положительную
    }
    ui->lineEdit_area->setText(QString::number(S));             //выставляем значение площади и периметра в нужную строку
    ui->lineEdit_perimeter->setText(QString::number(P));
}

void MainWin::on_pushButton_saven_clicked()             // при нажатии на кнопку "сохраненное"
{
    bookFile book;                  //создаем переменную bookFile для чтения в файла
    int j = 0;
    QString str1 = "", str2[16];    //создаем вспомогательную строку и массив строк
    recType rt[8];                  //создаем массив структуры, такой же, как и в файле
    book.readChart(rt);             //выводим в массив первые 8 записей
    while (rt[j].T != NULL)         //пока известно количество точек (т.е. запись была нами создана раньше)
    {
        str1 = rt[j].T;             //запоминаем количество точек
        for (int i = 0; i < str1.toInt()*2; i++)
        {
            str2[i] = rt[j].xy[i];      //запоминаем координаты этих точек
        }
        j++;
    }
    ui->spinBox->setValue(str1.toInt());       //выставляем в счетчик нужное количество точек в итоге последней сохраненной фигуры
    for (int i = 0; i < str1.toInt()*2; i++)
    {
        lineEdits[i]->setText(str2[i]);         //выстявляем в строках сохраненные координаты в итоге последней сохраненной фигуры
    }
}

void MainWin::on_pushButton_save_clicked()      //при нажатии на кнопку "сохранить"
{
    bookFile book;                          //создаем переменную bookFile для записи в файл
    recType r;                              //создаем структуру, такую же, как и в файле для записи

    r.T = QString::number(n);       //присваиваем этой структуре нужные данные T - количество точек фигуры
    for (int i = 0; i < n*2; i++)   //r.xy - координаты соответсвующих точек
    {
        r.xy[i] = lineEdits[i]->text();
    }

    book.addRec(r);             //и сохраняем(добавляем) количество точек и координат в файл
}
