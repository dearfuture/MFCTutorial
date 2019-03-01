#include<afxwin.h>
#include<afxext.h>

class  CMyApp : public  CWinApp
{

	virtual  BOOL  InitInstance()
	{
		CFrameWnd  *pWnd = new  CFrameWnd;
		pWnd->Create(NULL, L"HELLO");
		pWnd->ShowWindow(SW_SHOW);

		CRect  r;
		pWnd->GetClientRect(r); 
		CEditView  *pEV = new  CEditView;
		pEV->Create(NULL, L"±à¼­", WS_CHILD | WS_BORDER | WS_VISIBLE,
			r, pWnd, 10000);

		this->m_pMainWnd = pWnd;


		return  TRUE;
	 
	}

};

CMyApp  theApp;