#pragma once
#include<afxwin.h>

class CMyApp : public CWinApp
{
public:
	CMyApp();
	~CMyApp();

	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};



