
// 058Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CMy058Dlg 对话框
class CMy058Dlg : public CDialogEx
{
// 构造
public:
	CMy058Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY058_DIALOG };
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
public:
	CStatic m_lbl;
	afx_msg void OnBnClickedSet();
	afx_msg void OnBnClickedKill();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
