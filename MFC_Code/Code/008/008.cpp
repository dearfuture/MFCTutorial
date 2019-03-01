#include <afxwin.h>

class MyApp :public  CWinApp
{

	virtual  BOOL  InitInstance()
	{

		CWinThread* pThread = AfxGetThread();
		CWinApp* pApp = AfxGetApp();

		//  AfxGetApp()  AfxGetThread()均指向theApp的地址，值相等
		bool  b1 =( pThread == pApp);
		bool  b2 = (pThread == this);

		return TRUE;
	}  
};

//定义全局唯一对象
MyApp  theApp;