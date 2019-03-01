#pragma once


// CNoModalDialog 对话框

class CNoModalDialog : public CDialog
{
	DECLARE_DYNAMIC(CNoModalDialog)

public:
	CNoModalDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CNoModalDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_NOMODAL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void PostNcDestroy();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
