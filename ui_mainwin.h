/********************************************************************************
** Form generated from reading UI file 'mainwin.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWin
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_20;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_XY;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout_3;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_x1;
    QLabel *label_x2;
    QLabel *label_x3;
    QLabel *label_x4;
    QLabel *label_x5;
    QLabel *label_x6;
    QLabel *label_x7;
    QLabel *label_x8;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_x1;
    QLineEdit *lineEdit_x2;
    QLineEdit *lineEdit_x3;
    QLineEdit *lineEdit_x4;
    QLineEdit *lineEdit_x5;
    QLineEdit *lineEdit_x6;
    QLineEdit *lineEdit_x7;
    QLineEdit *lineEdit_x8;
    QFormLayout *formLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_y1;
    QLabel *label_y2;
    QLabel *label_y3;
    QLabel *label_y4;
    QLabel *label_y5;
    QLabel *label_y6;
    QLabel *label_y7;
    QLabel *label_y8;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_y1;
    QLineEdit *lineEdit_y2;
    QLineEdit *lineEdit_y3;
    QLineEdit *lineEdit_y4;
    QLineEdit *lineEdit_y5;
    QLineEdit *lineEdit_y6;
    QLineEdit *lineEdit_y7;
    QLineEdit *lineEdit_y8;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_area;
    QLineEdit *lineEdit_area;
    QHBoxLayout *horizontalLayout;
    QLabel *label_perimeter;
    QLineEdit *lineEdit_perimeter;
    QPushButton *pushButton_save;
    QPushButton *pushButton_saven;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWin)
    {
        if (MainWin->objectName().isEmpty())
            MainWin->setObjectName(QStringLiteral("MainWin"));
        MainWin->resize(323, 316);
        MainWin->setMinimumSize(QSize(323, 316));
        MainWin->setMaximumSize(QSize(323, 316));
        centralWidget = new QWidget(MainWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(9, 9, 307, 274));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_20 = new QLabel(widget);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_2->addWidget(label_20);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximumSize(QSize(37, 20));

        horizontalLayout_2->addWidget(spinBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_XY = new QLabel(widget);
        label_XY->setObjectName(QStringLiteral("label_XY"));

        horizontalLayout_3->addWidget(label_XY);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_3);

        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_x1 = new QLabel(widget);
        label_x1->setObjectName(QStringLiteral("label_x1"));
        label_x1->setMaximumSize(QSize(19, 16777215));

        verticalLayout->addWidget(label_x1);

        label_x2 = new QLabel(widget);
        label_x2->setObjectName(QStringLiteral("label_x2"));
        label_x2->setMaximumSize(QSize(19, 16777215));

        verticalLayout->addWidget(label_x2);

        label_x3 = new QLabel(widget);
        label_x3->setObjectName(QStringLiteral("label_x3"));
        label_x3->setMaximumSize(QSize(19, 16777215));

        verticalLayout->addWidget(label_x3);

        label_x4 = new QLabel(widget);
        label_x4->setObjectName(QStringLiteral("label_x4"));
        label_x4->setMaximumSize(QSize(19, 16777215));

        verticalLayout->addWidget(label_x4);

        label_x5 = new QLabel(widget);
        label_x5->setObjectName(QStringLiteral("label_x5"));
        label_x5->setMaximumSize(QSize(19, 16777215));

        verticalLayout->addWidget(label_x5);

        label_x6 = new QLabel(widget);
        label_x6->setObjectName(QStringLiteral("label_x6"));
        label_x6->setMaximumSize(QSize(19, 16777215));

        verticalLayout->addWidget(label_x6);

        label_x7 = new QLabel(widget);
        label_x7->setObjectName(QStringLiteral("label_x7"));
        label_x7->setMaximumSize(QSize(19, 16777215));

        verticalLayout->addWidget(label_x7);

        label_x8 = new QLabel(widget);
        label_x8->setObjectName(QStringLiteral("label_x8"));
        label_x8->setMaximumSize(QSize(19, 16777215));

        verticalLayout->addWidget(label_x8);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_x1 = new QLineEdit(widget);
        lineEdit_x1->setObjectName(QStringLiteral("lineEdit_x1"));
        lineEdit_x1->setMaximumSize(QSize(69, 20));

        verticalLayout_2->addWidget(lineEdit_x1);

        lineEdit_x2 = new QLineEdit(widget);
        lineEdit_x2->setObjectName(QStringLiteral("lineEdit_x2"));
        lineEdit_x2->setMaximumSize(QSize(69, 20));

        verticalLayout_2->addWidget(lineEdit_x2);

        lineEdit_x3 = new QLineEdit(widget);
        lineEdit_x3->setObjectName(QStringLiteral("lineEdit_x3"));
        lineEdit_x3->setMaximumSize(QSize(69, 20));

        verticalLayout_2->addWidget(lineEdit_x3);

        lineEdit_x4 = new QLineEdit(widget);
        lineEdit_x4->setObjectName(QStringLiteral("lineEdit_x4"));
        lineEdit_x4->setMaximumSize(QSize(69, 20));

        verticalLayout_2->addWidget(lineEdit_x4);

        lineEdit_x5 = new QLineEdit(widget);
        lineEdit_x5->setObjectName(QStringLiteral("lineEdit_x5"));
        lineEdit_x5->setMaximumSize(QSize(69, 20));

        verticalLayout_2->addWidget(lineEdit_x5);

        lineEdit_x6 = new QLineEdit(widget);
        lineEdit_x6->setObjectName(QStringLiteral("lineEdit_x6"));
        lineEdit_x6->setMaximumSize(QSize(69, 20));

        verticalLayout_2->addWidget(lineEdit_x6);

        lineEdit_x7 = new QLineEdit(widget);
        lineEdit_x7->setObjectName(QStringLiteral("lineEdit_x7"));
        lineEdit_x7->setMaximumSize(QSize(69, 20));

        verticalLayout_2->addWidget(lineEdit_x7);

        lineEdit_x8 = new QLineEdit(widget);
        lineEdit_x8->setObjectName(QStringLiteral("lineEdit_x8"));
        lineEdit_x8->setMaximumSize(QSize(69, 20));

        verticalLayout_2->addWidget(lineEdit_x8);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout_2);


        formLayout_3->setLayout(0, QFormLayout::LabelRole, formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_y1 = new QLabel(widget);
        label_y1->setObjectName(QStringLiteral("label_y1"));
        label_y1->setMaximumSize(QSize(20, 16777215));

        verticalLayout_3->addWidget(label_y1);

        label_y2 = new QLabel(widget);
        label_y2->setObjectName(QStringLiteral("label_y2"));
        label_y2->setMaximumSize(QSize(20, 16777215));

        verticalLayout_3->addWidget(label_y2);

        label_y3 = new QLabel(widget);
        label_y3->setObjectName(QStringLiteral("label_y3"));
        label_y3->setMaximumSize(QSize(20, 16777215));

        verticalLayout_3->addWidget(label_y3);

        label_y4 = new QLabel(widget);
        label_y4->setObjectName(QStringLiteral("label_y4"));
        label_y4->setMaximumSize(QSize(20, 16777215));

        verticalLayout_3->addWidget(label_y4);

        label_y5 = new QLabel(widget);
        label_y5->setObjectName(QStringLiteral("label_y5"));
        label_y5->setMaximumSize(QSize(20, 16777215));

        verticalLayout_3->addWidget(label_y5);

        label_y6 = new QLabel(widget);
        label_y6->setObjectName(QStringLiteral("label_y6"));
        label_y6->setMaximumSize(QSize(20, 16777215));

        verticalLayout_3->addWidget(label_y6);

        label_y7 = new QLabel(widget);
        label_y7->setObjectName(QStringLiteral("label_y7"));
        label_y7->setMaximumSize(QSize(20, 16777215));

        verticalLayout_3->addWidget(label_y7);

        label_y8 = new QLabel(widget);
        label_y8->setObjectName(QStringLiteral("label_y8"));
        label_y8->setMaximumSize(QSize(20, 16777215));

        verticalLayout_3->addWidget(label_y8);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lineEdit_y1 = new QLineEdit(widget);
        lineEdit_y1->setObjectName(QStringLiteral("lineEdit_y1"));
        lineEdit_y1->setMaximumSize(QSize(69, 20));

        verticalLayout_4->addWidget(lineEdit_y1);

        lineEdit_y2 = new QLineEdit(widget);
        lineEdit_y2->setObjectName(QStringLiteral("lineEdit_y2"));
        lineEdit_y2->setMaximumSize(QSize(69, 20));

        verticalLayout_4->addWidget(lineEdit_y2);

        lineEdit_y3 = new QLineEdit(widget);
        lineEdit_y3->setObjectName(QStringLiteral("lineEdit_y3"));
        lineEdit_y3->setMaximumSize(QSize(69, 20));

        verticalLayout_4->addWidget(lineEdit_y3);

        lineEdit_y4 = new QLineEdit(widget);
        lineEdit_y4->setObjectName(QStringLiteral("lineEdit_y4"));
        lineEdit_y4->setMaximumSize(QSize(69, 20));

        verticalLayout_4->addWidget(lineEdit_y4);

        lineEdit_y5 = new QLineEdit(widget);
        lineEdit_y5->setObjectName(QStringLiteral("lineEdit_y5"));
        lineEdit_y5->setMaximumSize(QSize(69, 20));

        verticalLayout_4->addWidget(lineEdit_y5);

        lineEdit_y6 = new QLineEdit(widget);
        lineEdit_y6->setObjectName(QStringLiteral("lineEdit_y6"));
        lineEdit_y6->setMaximumSize(QSize(69, 20));

        verticalLayout_4->addWidget(lineEdit_y6);

        lineEdit_y7 = new QLineEdit(widget);
        lineEdit_y7->setObjectName(QStringLiteral("lineEdit_y7"));
        lineEdit_y7->setMaximumSize(QSize(69, 20));

        verticalLayout_4->addWidget(lineEdit_y7);

        lineEdit_y8 = new QLineEdit(widget);
        lineEdit_y8->setObjectName(QStringLiteral("lineEdit_y8"));
        lineEdit_y8->setMaximumSize(QSize(69, 20));

        verticalLayout_4->addWidget(lineEdit_y8);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, verticalLayout_4);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, formLayout_2);


        verticalLayout_6->addLayout(formLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        horizontalLayout_5->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_5->addWidget(pushButton);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_area = new QLabel(widget);
        label_area->setObjectName(QStringLiteral("label_area"));
        label_area->setMaximumSize(QSize(21, 16777215));

        horizontalLayout_4->addWidget(label_area);

        lineEdit_area = new QLineEdit(widget);
        lineEdit_area->setObjectName(QStringLiteral("lineEdit_area"));
        lineEdit_area->setMaximumSize(QSize(61, 20));

        horizontalLayout_4->addWidget(lineEdit_area);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_perimeter = new QLabel(widget);
        label_perimeter->setObjectName(QStringLiteral("label_perimeter"));
        label_perimeter->setMaximumSize(QSize(21, 16777215));

        horizontalLayout->addWidget(label_perimeter);

        lineEdit_perimeter = new QLineEdit(widget);
        lineEdit_perimeter->setObjectName(QStringLiteral("lineEdit_perimeter"));
        lineEdit_perimeter->setMaximumSize(QSize(61, 20));

        horizontalLayout->addWidget(lineEdit_perimeter);


        verticalLayout_5->addLayout(horizontalLayout);

        pushButton_save = new QPushButton(widget);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));

        verticalLayout_5->addWidget(pushButton_save);

        pushButton_saven = new QPushButton(widget);
        pushButton_saven->setObjectName(QStringLiteral("pushButton_saven"));

        verticalLayout_5->addWidget(pushButton_saven);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        horizontalLayout_5->addLayout(verticalLayout_5);

        MainWin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWin);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 323, 21));
        MainWin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWin);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWin->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWin);

        QMetaObject::connectSlotsByName(MainWin);
    } // setupUi

    void retranslateUi(QMainWindow *MainWin)
    {
        MainWin->setWindowTitle(QApplication::translate("MainWin", "MainWin", 0));
        label_20->setText(QApplication::translate("MainWin", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\320\262\320\276\321\202 \320\262\320\265\321\200\321\210\320\270\320\275", 0));
        label_XY->setText(QApplication::translate("MainWin", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 \321\202\320\276\321\207\320\265\320\272", 0));
        label_x1->setText(QApplication::translate("MainWin", "X1=", 0));
        label_x2->setText(QApplication::translate("MainWin", "X2=", 0));
        label_x3->setText(QApplication::translate("MainWin", "X3=", 0));
        label_x4->setText(QApplication::translate("MainWin", "X4=", 0));
        label_x5->setText(QApplication::translate("MainWin", "X5=", 0));
        label_x6->setText(QApplication::translate("MainWin", "X6=", 0));
        label_x7->setText(QApplication::translate("MainWin", "X7=", 0));
        label_x8->setText(QApplication::translate("MainWin", "X8=", 0));
        label_y1->setText(QApplication::translate("MainWin", "Y1=", 0));
        label_y2->setText(QApplication::translate("MainWin", "Y2=", 0));
        label_y3->setText(QApplication::translate("MainWin", "Y3=", 0));
        label_y4->setText(QApplication::translate("MainWin", "Y4=", 0));
        label_y5->setText(QApplication::translate("MainWin", "Y5=", 0));
        label_y6->setText(QApplication::translate("MainWin", "Y6=", 0));
        label_y7->setText(QApplication::translate("MainWin", "Y7=", 0));
        label_y8->setText(QApplication::translate("MainWin", "Y8=", 0));
        pushButton->setText(QApplication::translate("MainWin", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", 0));
        label_area->setText(QApplication::translate("MainWin", "S =", 0));
        label_perimeter->setText(QApplication::translate("MainWin", "P =", 0));
        pushButton_save->setText(QApplication::translate("MainWin", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        pushButton_saven->setText(QApplication::translate("MainWin", "\320\241\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\275\320\276\320\265", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWin: public Ui_MainWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H
