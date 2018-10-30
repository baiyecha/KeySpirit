#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

	m_timer = new QTimer(this);

	m_hwnd1 = ::FindWindow(NULL,L"MapleStory");
	connect(ui->Attark, SIGNAL(stateChanged(int)),this,SLOT(AutomaticAttark()));
	QObject::connect(m_timer, &QTimer::timeout, [=]() {::SendMessage(m_hwnd1, WM_KEYDOWN, VK_A, 0);});
}

MainWindow::~MainWindow()
{
    delete ui;
}

HWND MainWindow::GetXHandle(LPCWSTR procName)
{
	DWORD iProcID = 0;

	PROCESSENTRY32 pEntry = { sizeof(PROCESSENTRY32) };

	HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPALL, 0);
	if (hSnapshot != INVALID_HANDLE_VALUE)
	{
		if (Process32First(hSnapshot, &pEntry))
		{
			while (Process32Next(hSnapshot, &pEntry))
			{
				if (lstrcmpi(procName, pEntry.szExeFile) == 0)
				{
					iProcID = pEntry.th32ProcessID;
					CloseHandle(hSnapshot);
					break;
				}
			}
		}
	}

	HWND hwnd = ::GetTopWindow(NULL);
	while (hwnd)
	{
		DWORD pid = 0;
		DWORD dwProcessId = GetWindowThreadProcessId(hwnd, &pid);

		if (dwProcessId != 0)
		{
			if (pid == iProcID)
			{
				return hwnd;
			}
		}

		hwnd = ::GetNextWindow(hwnd, GW_HWNDNEXT);
	}
	return NULL;
}

void MainWindow::AutomaticEnter()
{

}

void MainWindow::AutomaticAttark()
{
	m_timer->start(ui->AttarkEdit->text().toInt());
}

void MainWindow::AutomaticSkill1()
{

}

void MainWindow::AutomaticSkill2()
{

}

void MainWindow::AutomaticSkill3()
{

}

void MainWindow::AutomaticSkill4()
{

}

void MainWindow::AutomaticSkill5()
{

}

void MainWindow::AutomaticSkill6()
{

}

void MainWindow::LRMove()
{
	
}
