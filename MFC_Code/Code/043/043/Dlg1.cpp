// Dlg1.cpp : 实现文件
//

#include "stdafx.h"
#include "043.h"
#include "Dlg1.h"
#include "afxdialogex.h"


// CDlg1 对话框

IMPLEMENT_DYNAMIC(CDlg1, CDialogEx)

CDlg1::CDlg1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CDlg1::~CDlg1()
{
}

void CDlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlg1, CDialogEx)
END_MESSAGE_MAP()


// CDlg1 消息处理程序
