
// 056Dlg.h : 头文件
//

#pragma once
#include "afxshelltreectrl.h"


// CMy056Dlg 对话框
class CMy056Dlg : public CDialogEx
{
// 构造
public:
	CMy056Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY056_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	CMFCShellListCtrl  m_shellList;
public:
	afx_msg void OnLvnItemchangedMfcshelllist1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnTvnSelchangedMfcshelltree1(NMHDR *pNMHDR, LRESULT *pResult);
	CMFCShellTreeCtrl m_shellTree;
};
