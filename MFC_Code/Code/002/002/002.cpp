#include<afxwin.h>//MFC����ͷ�ļ�

//Ӧ�ó�����󣬴������
class  MyApp :public  CWinApp
{
	//�鷽������д
	virtual BOOL InitInstance()
	{ 
		//new���ڶ���
		CFrameWnd  *pWnd = new CFrameWnd;
		//��������
		pWnd->Create(NULL, L"Hello World!");
		//��ʾ����
		pWnd->ShowWindow(SW_SHOW);

		//����������ָ��
		m_pMainWnd = pWnd; 
		return TRUE;
	} 
};

MyApp  theApp;
