#include<iostream>
#include<typeinfo>
#include<afxwin.h>

using namespace  std;


int  main()
{
	//typeid������
	const  type_info  &   t=typeid(CWnd);
	cout << t.name() << endl;//��ӡ������

	cout << typeid(CString).name() << endl;

	CDialog   dlg; //typeid�Ĳ��������Ǳ���������
	cout << (typeid(dlg) == typeid(CDialog)) << endl;

	cout << typeid( 1+100) .name()<< endl;


	//����MFC������ʱ����ʶ��֧��

	CWnd  wnd;
	cout <<"CWnd  IsKindOf   CObject	"<< wnd.IsKindOf(CObject::GetThisClass())<<endl;
	cout << "CWnd  IsKindOf   CWnd		" << wnd.IsKindOf( RUNTIME_CLASS(CWnd)) << endl;
	cout << "CWnd  IsKindOf   CFrameWnd	" << wnd.IsKindOf(CFrameWnd::GetThisClass()) << endl;
	cout << "CWnd  IsKindOf   CCmdTarget		" << wnd.IsKindOf(RUNTIME_CLASS(CCmdTarget)) << endl;



	return 0;
}