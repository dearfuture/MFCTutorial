#include<afxwin.h>


	class CMyApp : public  CWinApp
	{
		virtual BOOL InitInstance()
		{
			//new 的动态创建
			//CFrameWnd  *pWnd = new CFrameWnd;

			//MFC的动态创建
			CRuntimeClass  *p = CFrameWnd::GetThisClass();
			CFrameWnd  *pWnd = (CFrameWnd*)p->CreateObject();
			pWnd->Create(NULL, L"我的窗口");

			this->m_pMainWnd = pWnd;
			pWnd->ShowWindow(SW_SHOW); 


			return TRUE;
		} 
	};


	CMyApp  theApp;