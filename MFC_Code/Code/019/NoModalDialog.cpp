// NoModalDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "019.h"
#include "NoModalDialog.h"
#include "afxdialogex.h"


// CNoModalDialog 对话框

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


// CNoModalDialog 消息处理程序


void CNoModalDialog::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	//CDialog::OnOK();

	 DestroyWindow();

}


void CNoModalDialog::PostNcDestroy()
{ 
	CDialog::PostNcDestroy();

	//删除new的对象
	delete this;
}
