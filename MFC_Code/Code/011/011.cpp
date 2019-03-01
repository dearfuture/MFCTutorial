#include<afxwin.h>

class  MyWnd :public  CWnd
{
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
	{
		if (message == WM_LBUTTONDOWN)
		{
			int  a = 100;
		}
		return   CWnd::WindowProc(message, wParam, lParam);
	}
	virtual BOOL OnWndMsg(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pResult)
	{
		if (message == WM_LBUTTONDOWN)
		{
			//表示没有处理此消息，转至DefWindowProc
			return  false;
		}
		return CWnd::OnWndMsg(message, wParam, lParam, pResult);
	}

	virtual LRESULT DefWindowProc(UINT message, WPARAM wParam, LPARAM lParam)
	{
		if (message == WM_LBUTTONDOWN)
		{
			int  a = 100;
		}
		return CWnd::DefWindowProc(message, wParam, lParam);
	}

};


class  MyApp :public  CWinApp
{
	virtual  BOOL  InitInstance()
	{

		MyWnd *pWnd = new MyWnd;
		//窗口class名为系统预设的，其窗口处理函数为全局的DefWindowProc，
		//但是MFC框架用钩子更改为CWnd的WndProc
		pWnd->CreateEx(0, NULL, _T("Hello"), WS_CHILD | WS_BORDER,
			100, 100, 300, 300, GetDesktopWindow(), 0);
		pWnd->ShowWindow(SW_SHOW);
		m_pMainWnd = pWnd;
		return true;
	}

};

//唯一一个全局MFC运用程序实例
MyApp  theApp;