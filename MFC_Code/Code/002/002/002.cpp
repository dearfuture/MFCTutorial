#include<afxwin.h>//MFC核心头文件

//应用程序对象，代表程序
class  MyApp :public  CWinApp
{
	//虚方法重新写
	virtual BOOL InitInstance()
	{ 
		//new窗口对象
		CFrameWnd  *pWnd = new CFrameWnd;
		//创建窗口
		pWnd->Create(NULL, L"Hello World!");
		//显示窗口
		pWnd->ShowWindow(SW_SHOW);

		//保存主窗口指针
		m_pMainWnd = pWnd; 
		return TRUE;
	} 
};

MyApp  theApp;
