// MyModalDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "019.h"
#include "MyModalDialog.h"
#include "afxdialogex.h"


// CMyModalDialog 对话框

IMPLEMENT_DYNAMIC(CMyModalDialog, CDialogEx)

CMyModalDialog::CMyModalDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DLG_MODAL, pParent)
{

}

CMyModalDialog::~CMyModalDialog()
{
}

void CMyModalDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMyModalDialog, CDialogEx)
END_MESSAGE_MAP()


// CMyModalDialog 消息处理程序
