// MyBtn.cpp : ʵ���ļ�
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



// CMyBtn ��Ϣ�������




void CMyBtn::DrawItem(LPDRAWITEMSTRUCT  lpDrawItemStruct )
{
	CDC  *pDC = CDC::FromHandle(lpDrawItemStruct->hDC); 
	CRect  rc = lpDrawItemStruct->rcItem;

	//���ư�ť�ı߿�
	UINT state = lpDrawItemStruct->itemState;
	if (state & ODS_SELECTED)
		pDC->DrawFrameControl(rc, DFC_BUTTON, DFCS_BUTTONPUSH | DFCS_PUSHED);
	else
		pDC->DrawFrameControl(rc, DFC_BUTTON, DFCS_BUTTONPUSH);

	//���ƾ��εı���ɫ����Ҫ����3D�ı߿�DeflateRect��С���Σ�
	rc.DeflateRect(CSize(GetSystemMetrics(SM_CXEDGE), GetSystemMetrics(SM_CYEDGE)));
	//pDC->FillSolidRect(rc, RGB(255, 0, 0));
	pDC->FillSolidRect(rc, m_color);


	//�������ֱ���͸��
	int mode = pDC->SetBkMode(TRANSPARENT);

	//���Ʊ���
	CString text;
	GetWindowText(text);
	pDC->DrawText(text, &rc, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	
	//��ԭ֮ǰ�ı�������
	pDC->SetBkMode(mode);
}


void CMyBtn::PreSubclassWindow()
{ 
	//��ֹ������ʹ�����ǵ���ʱ�������ð�ťΪBS_OWNERDRAW
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
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	TRACKMOUSEEVENT csTME;
	csTME.cbSize = sizeof(csTME);
	csTME.dwFlags = TME_LEAVE | TME_HOVER;
	csTME.hwndTrack = m_hWnd;// ָ��Ҫ ׷�� �Ĵ��� 
	csTME.dwHoverTime = 2;  // ����ڰ�ť��ͣ������2ms ������Ϊ״̬ΪHOVER
	::_TrackMouseEvent(&csTME);
	 
	 
	CButton::OnMouseMove(nFlags, point);
}
