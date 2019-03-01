#include <afxwin.h>


class MyApp :  public CWinApp
{
	virtual BOOL InitApplication()
	{
		return  CWinApp::InitApplication();
	}

	virtual BOOL InitInstance()
	{
		/*
		//这些值均由winmain函数赋给theApp
		HINSTANCE  hInstance = this->m_hInstance;
		LPTSTR  lpCmdLine =  this->m_lpCmdLine;
		int  nCmdShow=this->m_nCmdShow;
		LPCTSTR pszExeName=   this->m_pszExeName;
		LPCTSTR pszAppName =  this->m_pszAppName;
	
		CWnd *pWnd = this->m_pMainWnd;
		*/

		CFrameWnd  *pWnd = new CFrameWnd;
		pWnd->Create(NULL, L"hello");
		pWnd->ShowWindow(SW_SHOW);

		this->m_pMainWnd = pWnd;

		return  TRUE;
	} 

	virtual int Run()
	{
		return CWinApp::Run();
	}


	virtual BOOL OnIdle(LONG lCount)
	{
		return CWinApp::OnIdle(lCount);
	}


	virtual int ExitInstance()
	{
		return CWinApp::ExitInstance();
	}

};

//启动全局唯一应用程序实例
MyApp  theApp;