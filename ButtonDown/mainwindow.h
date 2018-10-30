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
	void AutomaticEnter();    //�Զ��س�
	void AutomaticAttark();  //�Զ�����
	void AutomaticSkill1();   //�Զ�����1
	void AutomaticSkill2();   //�Զ�����2
	void AutomaticSkill3();   //�Զ�����3
	void AutomaticSkill4();   //�Զ�����4
	void AutomaticSkill5();   //�Զ�����5
	void AutomaticSkill6();   //�Զ�����6
	void LRMove();   //�����ƶ�
private:
    Ui::MainWindow *ui;
	HWND m_hwnd1;
	HWND m_hwnd2;
	QTimer* m_timer;
};

#endif // MAINWINDOW_H
