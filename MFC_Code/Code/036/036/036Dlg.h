
// 036Dlg.h : 头文件
//

#pragma once


// CMy036Dlg 对话框
class CMy036Dlg : public CDialogEx
{
// 构造
public:
	CMy036Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY036_DIALOG };
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

private:
	CSpinButtonCtrl  m_spin;

public:
	afx_msg void OnDeltaposSpin1(NMHDR *pNMHDR, LRESULT *pResult);
};
