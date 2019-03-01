#include <afxwin.h> 

#include"resource.h" 
class  CMyDlg :public  CDialog
{
	//在窗口被销毁以后， CWnd::OnNcDestroy会调用PostNcDestroy
    virtual void PostNcDestroy();
	virtual void  OnOK();
	virtual void  OnCancel();

};
 void   CMyDlg::PostNcDestroy()
 {
    	CDialog::PostNcDestroy();
		//销毁CMyDlg对象
       delete this;
 }
void CMyDlg::OnOK()
{
	CDialog::OnOK();
	//销毁窗口
    DestroyWindow();
}

void CMyDlg::OnCancel()
{
	CDialog::OnCancel();
	 DestroyWindow();
}

class MyApp : public CWinApp
{
public:
	BOOL InitInstance() //②程序入点
	{
		//创建非模态对话框
		CMyDlg*  pDlg = new CMyDlg;
		pDlg->Create(IDD_DIALOG1);
		pDlg->ShowWindow(SW_SHOW);
		m_pMainWnd = pDlg;
		return true;
	}
};
MyApp theApp; //①建立应用程序。
