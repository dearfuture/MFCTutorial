#include<afxwin.h>

class MyApp :public  CWinApp
{
	BOOL  InitInstance()
	{
		/*
		CWnd  *pWnd = new CWnd;
		//用在程序中创建子窗口（控件），而不是把它当做主窗口
		pWnd->Create(NULL, L"hello", WS_CHILD | WS_BORDER, CRect(100, 100, 400, 400)
			,  CWnd::FromHandle( GetDesktopWindow()), 1111); 
		pWnd->ShowWindow(SW_SHOW);

		this->m_pMainWnd = pWnd;
*/

		//使用CreateEx创建重叠窗口
		CWnd *pWnd = new CWnd;
		//为CWnd注册窗口类
		CString  className = AfxRegisterWndClass(CS_HREDRAW | CS_VREDRAW,
			(HCURSOR)0, (HBRUSH)(COLOR_3DSHADOW));
		//创建窗口
		pWnd->CreateEx(0, className, _T("Hello"), WS_OVERLAPPEDWINDOW,
			100, 100, 300, 300, NULL, NULL);
		//显示窗口
		pWnd->ShowWindow(SW_SHOW);


		m_pMainWnd = pWnd; 

		return TRUE;
	} 
};

MyApp  theApp;