#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <windows.h>
#include <tlhelp32.h>
#include <QTimer>


#define VK_A  0x41

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
	HWND GetXHandle(LPCWSTR procName);
public slots:
	void AutomaticEnter();    //自动回车
	void AutomaticAttark();  //自动攻击
	void AutomaticSkill1();   //自动技能1
	void AutomaticSkill2();   //自动技能2
	void AutomaticSkill3();   //自动技能3
	void AutomaticSkill4();   //自动技能4
	void AutomaticSkill5();   //自动技能5
	void AutomaticSkill6();   //自动技能6
	void LRMove();   //左右移动
private:
    Ui::MainWindow *ui;
	HWND m_hwnd1;
	HWND m_hwnd2;
	QTimer* m_timer;
};

#endif // MAINWINDOW_H
