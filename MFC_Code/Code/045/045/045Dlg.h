
// 045Dlg.h : 头文件
//

#pragma once


// CMy045Dlg 对话框
class CMy045Dlg : public CDialogEx
{
// 构造
public:
	CMy045Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY045_DIALOG };
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


	CRichEditCtrl  m_edit;
public:
	afx_msg void OnEnChangeRichedit21();
};
