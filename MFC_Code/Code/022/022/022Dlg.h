
// 022Dlg.h : ͷ�ļ�
//

#pragma once


// CMy022Dlg �Ի���
class CMy022Dlg : public CDialogEx
{
// ����
public:
	CMy022Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY022_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��



private :
	//1����ͨ��ť
	CButton  m_btn;

	//2����ѡ��ť
	CButton  m_radioBtn1;
	CButton  m_radioBtn2;

	//3����ѡ��ť
	CButton  m_checkBox1;
	CButton  m_checkBox2;
	CButton  m_checkBox3;


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();

	afx_msg void OnBnClickedButton1();	afx_msg void OnBnClickedRadio1();	afx_msg void OnBnClickedCheck1();


	DECLARE_MESSAGE_MAP()
};
