#ifndef MAINWIN_H
#define MAINWIN_H

#include <QMainWindow>
#include <QLineEdit>

namespace Ui {
class MainWin;
}

class MainWin : public QMainWindow
{
    Q_OBJECT

public:
    QLineEdit *lineEdits[16];
    explicit MainWin(QWidget *parent = nullptr);
    ~MainWin();

private slots:
    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_save_clicked();

    void on_pushButton_saven_clicked();

private:
    Ui::MainWin *ui;
};

#endif // MAINWIN_H
