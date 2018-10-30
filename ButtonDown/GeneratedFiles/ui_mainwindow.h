/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *MoveEdit;
    QLabel *label_4;
    QComboBox *AttarkCombo;
    QCheckBox *Enter;
    QCheckBox *AttarkNoStop;
    QCheckBox *Skill4;
    QPushButton *StartUp;
    QCheckBox *Attark;
    QCheckBox *Skill5;
    QLineEdit *EnterEdit;
    QCheckBox *Skill1;
    QLineEdit *SkillEdit4;
    QComboBox *SkillCombo4;
    QToolButton *StartUpTool;
    QLineEdit *SkillEdit2;
    QComboBox *SkillCombo5;
    QComboBox *SkillCombo2;
    QLineEdit *SkillEdit6;
    QLineEdit *AttarkEdit;
    QComboBox *SkillCombo3;
    QLineEdit *SkillEdit1;
    QLabel *label;
    QLabel *label_3;
    QCheckBox *Skill2;
    QCheckBox *Skill3;
    QComboBox *SkillCombo6;
    QLineEdit *SkillEdit5;
    QLineEdit *StartUpEdit;
    QLabel *label_7;
    QLabel *label_2;
    QLineEdit *SkillEdit3;
    QComboBox *SkillCombo1;
    QCheckBox *Move;
    QCheckBox *Skill6;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(435, 300);
        MainWindow->setMinimumSize(QSize(435, 300));
        MainWindow->setMaximumSize(QSize(435, 300));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MoveEdit = new QLineEdit(centralWidget);
        MoveEdit->setObjectName(QStringLiteral("MoveEdit"));
        MoveEdit->setGeometry(QRect(90, 120, 41, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 60, 31, 21));
        AttarkCombo = new QComboBox(centralWidget);
        AttarkCombo->setObjectName(QStringLiteral("AttarkCombo"));
        AttarkCombo->setGeometry(QRect(200, 0, 41, 21));
        Enter = new QCheckBox(centralWidget);
        Enter->setObjectName(QStringLiteral("Enter"));
        Enter->setGeometry(QRect(10, 0, 91, 21));
        AttarkNoStop = new QCheckBox(centralWidget);
        AttarkNoStop->setObjectName(QStringLiteral("AttarkNoStop"));
        AttarkNoStop->setGeometry(QRect(330, 0, 91, 21));
        Skill4 = new QCheckBox(centralWidget);
        Skill4->setObjectName(QStringLiteral("Skill4"));
        Skill4->setGeometry(QRect(230, 60, 81, 21));
        StartUp = new QPushButton(centralWidget);
        StartUp->setObjectName(QStringLiteral("StartUp"));
        StartUp->setGeometry(QRect(360, 240, 75, 21));
        Attark = new QCheckBox(centralWidget);
        Attark->setObjectName(QStringLiteral("Attark"));
        Attark->setGeometry(QRect(130, 0, 71, 21));
        Skill5 = new QCheckBox(centralWidget);
        Skill5->setObjectName(QStringLiteral("Skill5"));
        Skill5->setGeometry(QRect(10, 90, 81, 21));
        EnterEdit = new QLineEdit(centralWidget);
        EnterEdit->setObjectName(QStringLiteral("EnterEdit"));
        EnterEdit->setGeometry(QRect(80, 0, 41, 20));
        Skill1 = new QCheckBox(centralWidget);
        Skill1->setObjectName(QStringLiteral("Skill1"));
        Skill1->setGeometry(QRect(10, 30, 81, 21));
        SkillEdit4 = new QLineEdit(centralWidget);
        SkillEdit4->setObjectName(QStringLiteral("SkillEdit4"));
        SkillEdit4->setGeometry(QRect(390, 60, 41, 20));
        SkillCombo4 = new QComboBox(centralWidget);
        SkillCombo4->setObjectName(QStringLiteral("SkillCombo4"));
        SkillCombo4->setGeometry(QRect(310, 60, 41, 21));
        StartUpTool = new QToolButton(centralWidget);
        StartUpTool->setObjectName(QStringLiteral("StartUpTool"));
        StartUpTool->setGeometry(QRect(330, 240, 37, 21));
        SkillEdit2 = new QLineEdit(centralWidget);
        SkillEdit2->setObjectName(QStringLiteral("SkillEdit2"));
        SkillEdit2->setGeometry(QRect(390, 30, 41, 20));
        SkillCombo5 = new QComboBox(centralWidget);
        SkillCombo5->setObjectName(QStringLiteral("SkillCombo5"));
        SkillCombo5->setGeometry(QRect(90, 90, 41, 21));
        SkillCombo2 = new QComboBox(centralWidget);
        SkillCombo2->setObjectName(QStringLiteral("SkillCombo2"));
        SkillCombo2->setGeometry(QRect(310, 30, 41, 21));
        SkillEdit6 = new QLineEdit(centralWidget);
        SkillEdit6->setObjectName(QStringLiteral("SkillEdit6"));
        SkillEdit6->setGeometry(QRect(390, 90, 41, 20));
        AttarkEdit = new QLineEdit(centralWidget);
        AttarkEdit->setObjectName(QStringLiteral("AttarkEdit"));
        AttarkEdit->setGeometry(QRect(280, 0, 41, 20));
        SkillCombo3 = new QComboBox(centralWidget);
        SkillCombo3->setObjectName(QStringLiteral("SkillCombo3"));
        SkillCombo3->setGeometry(QRect(90, 60, 41, 21));
        SkillEdit1 = new QLineEdit(centralWidget);
        SkillEdit1->setObjectName(QStringLiteral("SkillEdit1"));
        SkillEdit1->setGeometry(QRect(170, 30, 41, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 0, 31, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 30, 31, 21));
        Skill2 = new QCheckBox(centralWidget);
        Skill2->setObjectName(QStringLiteral("Skill2"));
        Skill2->setGeometry(QRect(230, 30, 81, 21));
        Skill3 = new QCheckBox(centralWidget);
        Skill3->setObjectName(QStringLiteral("Skill3"));
        Skill3->setGeometry(QRect(10, 60, 81, 21));
        SkillCombo6 = new QComboBox(centralWidget);
        SkillCombo6->setObjectName(QStringLiteral("SkillCombo6"));
        SkillCombo6->setGeometry(QRect(310, 90, 41, 21));
        SkillEdit5 = new QLineEdit(centralWidget);
        SkillEdit5->setObjectName(QStringLiteral("SkillEdit5"));
        SkillEdit5->setGeometry(QRect(170, 90, 41, 20));
        StartUpEdit = new QLineEdit(centralWidget);
        StartUpEdit->setObjectName(QStringLiteral("StartUpEdit"));
        StartUpEdit->setGeometry(QRect(0, 240, 331, 21));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(360, 90, 31, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 30, 31, 21));
        SkillEdit3 = new QLineEdit(centralWidget);
        SkillEdit3->setObjectName(QStringLiteral("SkillEdit3"));
        SkillEdit3->setGeometry(QRect(170, 60, 41, 20));
        SkillCombo1 = new QComboBox(centralWidget);
        SkillCombo1->setObjectName(QStringLiteral("SkillCombo1"));
        SkillCombo1->setGeometry(QRect(90, 30, 41, 21));
        Move = new QCheckBox(centralWidget);
        Move->setObjectName(QStringLiteral("Move"));
        Move->setGeometry(QRect(10, 120, 71, 21));
        Skill6 = new QCheckBox(centralWidget);
        Skill6->setObjectName(QStringLiteral("Skill6"));
        Skill6->setGeometry(QRect(230, 90, 81, 21));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(360, 60, 31, 21));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 90, 31, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 435, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        AttarkCombo->setCurrentIndex(0);
        SkillCombo4->setCurrentIndex(0);
        SkillCombo5->setCurrentIndex(0);
        SkillCombo2->setCurrentIndex(0);
        SkillCombo3->setCurrentIndex(0);
        SkillCombo6->setCurrentIndex(0);
        SkillCombo1->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\275\240\345\246\210\346\255\273\344\272\206", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\273\266\350\277\237", Q_NULLPTR));
        AttarkCombo->clear();
        AttarkCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "A", Q_NULLPTR)
         << QApplication::translate("MainWindow", "B", Q_NULLPTR)
         << QApplication::translate("MainWindow", "C", Q_NULLPTR)
         << QApplication::translate("MainWindow", "D", Q_NULLPTR)
         << QApplication::translate("MainWindow", "E", Q_NULLPTR)
         << QApplication::translate("MainWindow", "F", Q_NULLPTR)
         << QApplication::translate("MainWindow", "G", Q_NULLPTR)
        );
        Enter->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\345\233\236\350\275\246", Q_NULLPTR));
        AttarkNoStop->setText(QApplication::translate("MainWindow", "\346\224\273\345\207\273\344\270\215\346\224\276", Q_NULLPTR));
        Skill4->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\346\212\200\350\203\2754", Q_NULLPTR));
        StartUp->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250", Q_NULLPTR));
        Attark->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\346\224\273\345\207\273", Q_NULLPTR));
        Skill5->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\346\212\200\350\203\2755", Q_NULLPTR));
        Skill1->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\346\212\200\350\203\2751", Q_NULLPTR));
        SkillCombo4->clear();
        SkillCombo4->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
        );
        StartUpTool->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        SkillCombo5->clear();
        SkillCombo5->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
        );
        SkillCombo2->clear();
        SkillCombo2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
        );
        SkillCombo3->clear();
        SkillCombo3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
        );
        label->setText(QApplication::translate("MainWindow", "\345\273\266\350\277\237", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\345\273\266\350\277\237", Q_NULLPTR));
        Skill2->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\346\212\200\350\203\2752", Q_NULLPTR));
        Skill3->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\346\212\200\350\203\2753", Q_NULLPTR));
        SkillCombo6->clear();
        SkillCombo6->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("MainWindow", "\345\273\266\350\277\237", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\273\266\350\277\237", Q_NULLPTR));
        SkillCombo1->clear();
        SkillCombo1->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
        );
        Move->setText(QApplication::translate("MainWindow", "\345\267\246\345\217\263\347\247\273\345\212\250", Q_NULLPTR));
        Skill6->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\346\212\200\350\203\2756", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\345\273\266\350\277\237", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\345\273\266\350\277\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
