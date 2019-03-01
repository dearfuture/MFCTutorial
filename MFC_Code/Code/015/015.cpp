#include<afxwin.h>

#include"resource.h"

class MyApp :public CWinApp
{
	virtual  BOOL  InitInstance( 	)
	{
		CFrameWnd  *pWnd = new  CFrameWnd;

		//1.使用Create创建
		 pWnd->Create(NULL, L"hello");//NULL表示使用系统预定义窗口类

		//2.使用LoadFrame 加载资源ID创建
		//pWnd->LoadFrame(IDI_ICON1); 
      

		pWnd->ShowWindow(SW_SHOW); 
		this->m_pMainWnd = pWnd;

		return TRUE;
	}

};
 
MyApp  theApp;