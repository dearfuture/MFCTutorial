#include <afxwin.h> 

#include"resource.h" 
class  CMyDlg :public  CDialog
{
	//�ڴ��ڱ������Ժ� CWnd::OnNcDestroy�����PostNcDestroy
    virtual void PostNcDestroy();
	virtual void  OnOK();
	virtual void  OnCancel();

};
 void   CMyDlg::PostNcDestroy()
 {
    	CDialog::PostNcDestroy();
		//����CMyDlg����
       delete this;
 }
void CMyDlg::OnOK()
{
	CDialog::OnOK();
	//���ٴ���
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
	BOOL InitInstance() //�ڳ������
	{
		//������ģ̬�Ի���
		CMyDlg*  pDlg = new CMyDlg;
		pDlg->Create(IDD_DIALOG1);
		pDlg->ShowWindow(SW_SHOW);
		m_pMainWnd = pDlg;
		return true;
	}
};
MyApp theApp; //�ٽ���Ӧ�ó���
