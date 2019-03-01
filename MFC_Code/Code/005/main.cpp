#include<afxwin.h>//包含CWinThread的头文件
#include<iostream>
using namespace  std;

//线程处理函数
UINT  ThreadFun(LPVOID  param)
{
	for (int i = 0; i < 5; ++i)
	{
		char *str = (char *)param;
		cout << str << endl;
		Sleep(1000);
	}


	return 0;
}

int  main()
{
	//定义一个类的对象
	CWinThread  t(ThreadFun,"hello"  );

	//不需要线程结束的时候自动销毁t
	t.m_bAutoDelete = false;

	 
	//调用线程的成员函数，创建线程
	t.CreateThread(); 

	//输出其他成员变量,创建了之后才会有
	cout << "参数：" <<(char *) t.m_pThreadParams << endl;
	cout << "线程句柄：" << t.m_hThread << endl;
	cout << "线程ID：" << t.m_nThreadID << endl;


	//等待线程执行完毕
	WaitForSingleObject(t.m_hThread, INFINITE);

	cout << "main结束" << endl;


	return 0;
}