// MyBtn.cpp : 实现文件
//

#include "stdafx.h"
#include "026.h"
#include "MyBtn.h"


// CMyBtn

IMPLEMENT_DYNAMIC(CMyBtn, CButton)

CMyBtn::CMyBtn()
{
	m_color = RGB(255, 0, 0);
}

CMyBtn::~CMyBtn()
{
}


BEGIN_MESSAGE_MAP(CMyBtn, CButton)
	ON_WM_MOUSEHOVER()
	ON_WM_MOUSELEAVE()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()



// CMyBtn 消息处理程序




void CMyBtn::DrawItem(LPDRAWITEMSTRUCT  lpDrawItemStruct )
{
	CDC  *pDC = CDC::FromHandle(lpDrawItemStruct->hDC); 
	CRect  rc = lpDrawItemStruct->rcItem;

	//绘制按钮的边框
	UINT state = lpDrawItemStruct->itemState;
	if (state & ODS_SELECTED)
		pDC->DrawFrameControl(rc, DFC_BUTTON, DFCS_BUTTONPUSH | DFCS_PUSHED);
	else
		pDC->DrawFrameControl(rc, DFC_BUTTON, DFCS_BUTTONPUSH);

	//绘制矩形的背景色（不要覆盖3D的边框，DeflateRect缩小矩形）
	rc.DeflateRect(CSize(GetSystemMetrics(SM_CXEDGE), GetSystemMetrics(SM_CYEDGE)));
	//pDC->FillSolidRect(rc, RGB(255, 0, 0));
	pDC->FillSolidRect(rc, m_color);


	//设置文字背景透明
	int mode = pDC->SetBkMode(TRANSPARENT);

	//绘制标题
	CString text;
	GetWindowText(text);
	pDC->DrawText(text, &rc, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	
	//还原之前的背景属性
	pDC->SetBkMode(mode);
}


void CMyBtn::PreSubclassWindow()
{ 
	//防止第三方使用我们的类时忘记设置按钮为BS_OWNERDRAW
	ModifyStyle(0, BS_OWNERDRAW);
	CButton::PreSubclassWindow();
}


void CMyBtn::OnMouseHover(UINT nFlags, CPoint point)
{
	m_color = RGB(255, 255, 0);
	Invalidate();

	CButton::OnMouseHover(nFlags, point);
}


void CMyBtn::OnMouseLeave()
{
	m_color = RGB(255, 0, 0);
	Invalidate();

	CButton::OnMouseLeave();
}


void CMyBtn::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	TRACKMOUSEEVENT csTME;
	csTME.cbSize = sizeof(csTME);
	csTME.dwFlags = TME_LEAVE | TME_HOVER;
	csTME.hwndTrack = m_hWnd;// 指定要 追踪 的窗口 
	csTME.dwHoverTime = 2;  // 鼠标在按钮上停留超过2ms ，才认为状态为HOVER
	::_TrackMouseEvent(&csTME);
	 
	 
	CButton::OnMouseMove(nFlags, point);
}
