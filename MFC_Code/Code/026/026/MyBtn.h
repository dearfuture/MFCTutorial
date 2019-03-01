#pragma once


// CMyBtn

class CMyBtn : public CButton
{
	DECLARE_DYNAMIC(CMyBtn)

public:
	CMyBtn();
	virtual ~CMyBtn();

protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual void DrawItem(LPDRAWITEMSTRUCT /*lpDrawItemStruct*/);
	virtual void PreSubclassWindow();
	afx_msg void OnMouseHover(UINT nFlags, CPoint point);
	afx_msg void OnMouseLeave();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);


private:
	COLORREF   m_color;
};


