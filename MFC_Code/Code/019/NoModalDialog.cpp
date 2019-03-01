// NoModalDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "019.h"
#include "NoModalDialog.h"
#include "afxdialogex.h"


// CNoModalDialog �Ի���

IMPLEMENT_DYNAMIC(CNoModalDialog, CDialog)

CNoModalDialog::CNoModalDialog(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DLG_NOMODAL, pParent)
{

}

CNoModalDialog::~CNoModalDialog()
{
}

void CNoModalDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CNoModalDialog, CDialog)
	ON_BN_CLICKED(IDOK, &CNoModalDialog::OnBnClickedOk)
END_MESSAGE_MAP()


// CNoModalDialog ��Ϣ�������


void CNoModalDialog::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//CDialog::OnOK();

	 DestroyWindow();

}


void CNoModalDialog::PostNcDestroy()
{ 
	CDialog::PostNcDestroy();

	//ɾ��new�Ķ���
	delete this;
}
