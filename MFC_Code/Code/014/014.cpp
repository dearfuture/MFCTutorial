#include<afxwin.h>

//使用VS调试MFC框架运行流程，演示CWnd消息处理及消息映射机制
//注意右键工程     属性->MFC使用-> 在静态库使用MFC


class MyWnd :public  CWnd
{
protected:
	//1.消息处理函数声明
	afx_msg    int    OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg   void  OnLButtonDown(UINT nFlags, CPoint point);
	void   OnLButtonDblClk(UINT nFlags, CPoint point);
	//2消息映射声明
	DECLARE_MESSAGE_MAP()
};


BEGIN_MESSAGE_MAP(MyWnd, CWnd)
	//3加上映射宏
	ON_WM_CREATE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	//.....
END_MESSAGE_MAP()

//4.实现消息处理函数
int    MyWnd::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	return  0;
}

void  MyWnd::OnLButtonDown(UINT nFlags, CPoint point)
{
	int  a = 100;
}

void  MyWnd::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	int  a = 100;
}

class MyApp :public  CWinApp
{

	virtual   BOOL  InitInstance()
	{
		//注册窗口类
		CString  className = AfxRegisterWndClass(CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS, (HCURSOR)0, (HBRUSH)(COLOR_3DSHADOW));

		MyWnd *pWnd = new MyWnd;
		pWnd->CreateEx(0, className, _T("Hello"), WS_OVERLAPPEDWINDOW, 100, 100, 300, 300, NULL, 0);
		pWnd->ShowWindow(SW_SHOW);

		m_pMainWnd = pWnd;
		return  TRUE;
	}

};

//全局唯一的应用程序实例
MyApp  theApp;