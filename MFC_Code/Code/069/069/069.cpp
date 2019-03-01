#include <afx.h> 
#include <iostream> 
using  namespace  std;
 

//支持序列化
class  CPerson :public  CObject
{
public:

	DECLARE_SERIAL(CPerson)

	CPerson() {}
	CPerson(CString _name, int  _age, char _sex): name(_name),age(_age),sex(_sex)
	{}
	void  Print()
	{
		wcout.imbue(locale("chs"));//设置字符集
		wcout << name.GetString() << "," << age << "," << sex << endl;
	}

	virtual void Serialize(CArchive& ar)
	{
		if (ar.IsLoading())//表示从文件加载
		{
			ar >> name >> age >> sex;
		}
		else
		{
			ar << name << age << sex;
		} 
	}
private:
	CString  name;
	int age;
	char  sex;
};

IMPLEMENT_SERIAL(CPerson, CObject, 1)


int    main(int argc,  char* argv[])
{ 
	/*
	CPerson  person(L"张三", 23, 'M');

	//先序列化对象
	CFile file(L"person.t", CFile::modeCreate | CFile::modeReadWrite);
	CArchive  ar(&file, CArchive::store);
	ar.WriteObject(&person);
	ar.Close();
	 
	file.SeekToBegin();//移到文件开头再读取
	*/


	//反序列化文件
	CFile file(L"person.t", CFile::modeReadWrite);
	CArchive  ar2(&file, CArchive::load);
	CPerson  *p=(CPerson  *)ar2.ReadObject(RUNTIME_CLASS( CPerson) );
	p->Print(); 
	ar2.Close();

	
	 
	return 0;
}
