#include "MyApp.h"
#include"MainFrame.h"
#include"MyDoc.h"
#include"MyView.h"
#include"resource.h"

BEGIN_MESSAGE_MAP(CMyApp, CWinApp)
// 基于文件的标准文档命令
	ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
 END_MESSAGE_MAP()


CMyApp::CMyApp()
{
}


CMyApp::~CMyApp()
{
}


 BOOL CMyApp::InitInstance()
{
	/*
	CMainFrame  * p = new   CMainFrame;
	p->Create(NULL, L"记事本");
	this->m_pMainWnd = p;
	p->UpdateWindow();
	p->ShowWindow(SW_SHOW);*/


	// 注册应用程序的文档模板。  文档模板
	// 将用作文档、框架窗口和视图之间的连接
	CSingleDocTemplate* pDocTemplate;
	pDocTemplate = new CSingleDocTemplate(
		IDR_MENU1,
		RUNTIME_CLASS(CMyDoc),
		RUNTIME_CLASS(CMainFrame),       // 主 SDI 框架窗口
		RUNTIME_CLASS(CMyView));
	if (!pDocTemplate)
		return FALSE;
	AddDocTemplate(pDocTemplate); 

	OnFileNew();

	// 唯一的一个窗口已初始化，因此显示它并对其进行更新
	m_pMainWnd->ShowWindow(SW_SHOW);
	m_pMainWnd->UpdateWindow();

	return   true; 
}


//唯一的应用程序实例对象
CMyApp  theApp;