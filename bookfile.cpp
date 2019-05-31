#include "bookfile.h"
#include "mainwin.h"
#include <QMessageBox>

bookFile::bookFile()  // конструктор
{

    f=new QFile("base.txt");// создаем объект-файл
    if(!f->exists())	// если файл не существует, то
    {					// формирмируем сообщение
        QMessageBox msg(QMessageBox::Critical,
                       "Файл не найден",
                       "Файл base.txt создан",
                       QMessageBox::Ok,0);
                msg.exec();		// выводим сообщение на экран
    }
    f->open(QFile::ReadWrite); // открываем файл для ввода-вывода
 }

bookFile::~bookFile()   // деструктор
{
    f->close();        // закрываем файл
    delete f;                        // освобождаем память
}
bool bookFile::addRec(recType r)
{
    f->seek(f->size()); // переходим на конец файла
    QDataStream out(f); // связываем с файлом поток вывода
    out<<r.T;            //добавляем в поток вывода
    for (int i = 0; i < r.T.toInt()*2; i++)
    {
        out<<r.xy[i];
    }
    // выводим данные в файл
    return true;
}
bool bookFile::readRec()
{
    QDataStream in(f); // связываем с файлом поток ввода
    if (in.atEnd())return false;//если файл закончился то ложь
    else                        //иначе
    {
        in>>r.T;                //выводим в поток ввода данные
        for (int i = 0; i < r.T.toInt()*2; i++)
        {
            in>>r.xy[i];
        }

        return true;
    }
}
void bookFile::readChart(recType *r1)
{
    int	i	=	0;
    f->reset();
    bool fff = readRec();   //проверка на наличие записей
    while(fff)              //пока запись есть то
    {
        r1[i] = r;          //записать их из файла в программу
        i++;
        fff=readRec();      //пеерейти к следующей записи
    }

}
