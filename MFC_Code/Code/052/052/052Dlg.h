
// 052Dlg.h : 头文件
//

#pragma once


// CMy052Dlg 对话框
class CMy052Dlg : public CDialogEx
{
// 构造
public:
	CMy052Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY052_DIALOG };
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

	CMFCEditBrowseCtrl  m_editBC;
public:
	afx_msg void OnEnChangeMfceditbrowse1();
};
