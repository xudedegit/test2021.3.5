#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//�̳е�ѧϰ����
//�̳е�Ŀ����Ϊ�˷�ֹ�ظ���ʹ������ͬ���ԵĲ����ظ�����

//Java����Ƶ����ҳ��

//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��.....(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ���ϵ���ǡ�վ�ڵ�ͼ.....(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Ƶ���ӡ�Python��Ƶ���ӡ�C++��Ƶ����" << endl;
//	}
//	void content()
//	{
//		cout << "Java��Ƶѧϰ����" << endl;
//	}
//};
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��.....(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ���ϵ���ǡ�վ�ڵ�ͼ.....(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Ƶ���ӡ�Python��Ƶ���ӡ�C++��Ƶ����" << endl;
//	}
//	void content()
//	{
//		cout << "Python��Ƶѧϰ����" << endl;
//	}
//};
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��.....(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ���ϵ���ǡ�վ�ڵ�ͼ.....(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Ƶ���ӡ�Python��Ƶ���ӡ�C++��Ƶ����" << endl;
//	}
//	void content()
//	{
//		cout << "C++��Ƶѧϰ����" << endl;
//	}
//};
//void test01()
//{
//	Java java;
//	java.header();
//	java.footer();
//	java.left();
//	java.content();
//}
//void test02()
//{
//	Python python;
//	python.header();
//	python.footer();
//	python.left();
//	python.content();
//}
//void test03()
//{
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}
//int main()
//{
//	test01();
//	cout << "------------------------" << endl;
//	test02();
//	cout << "------------------------" << endl;
//
//	test03();
//	system("pause");
//	return 0;
//
//	system("pause");
//	return 0;
//}

class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��.....(����ͷ��)" << endl;
	}
	void footer()
	{
		cout << "�������ġ���ϵ���ǡ�վ�ڵ�ͼ.....(�����ײ�)" << endl;
	}
	void left()
	{
		cout << "Java��Ƶ���ӡ�Python��Ƶ���ӡ�C++��Ƶ����" << endl;
	}

};
//Javaѧϰ����
class Java:public BasePage
{
public:
	void content()
	{
		cout << "Javaѧϰ��Ƶ����" << endl;
	}
	
};

//Pythonѧϰ����
class Python:public BasePage
{

public:
	void content()
	{
		cout << "Pythonѧϰ��Ƶ����" << endl;
	}
	
};
//C++ѧϰ����
class CPP:public BasePage
{
public:
	void content()
	{
		cout << "C++ѧϰ��Ƶ����" << endl;
	}
};
void test01()
{
	Java java;
	java.header();
	java.footer();
	java.left();
	java.content();
}
void test02()
{
	Python python;
	python.header();
	python.footer();
	python.left();
	python.content();
}
void test03()
{
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}

int main()
{
	test01();
	cout << "------------------" << endl;
	test02();
	cout << "------------------" << endl;
	test03();

	system("pause");
	return 0;
}