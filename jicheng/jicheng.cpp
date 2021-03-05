#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//继承的学习案例
//继承的目的是为了防止重复，使具有相同特性的部分重复利用

//Java的视频下载页面

//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册.....(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、联系我们、站内地图.....(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java视频链接、Python视频链接、C++视频链接" << endl;
//	}
//	void content()
//	{
//		cout << "Java视频学习内容" << endl;
//	}
//};
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册.....(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、联系我们、站内地图.....(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java视频链接、Python视频链接、C++视频链接" << endl;
//	}
//	void content()
//	{
//		cout << "Python视频学习内容" << endl;
//	}
//};
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册.....(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、联系我们、站内地图.....(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java视频链接、Python视频链接、C++视频链接" << endl;
//	}
//	void content()
//	{
//		cout << "C++视频学习内容" << endl;
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
		cout << "首页、公开课、登录、注册.....(公共头部)" << endl;
	}
	void footer()
	{
		cout << "帮助中心、联系我们、站内地图.....(公共底部)" << endl;
	}
	void left()
	{
		cout << "Java视频链接、Python视频链接、C++视频链接" << endl;
	}

};
//Java学习界面
class Java:public BasePage
{
public:
	void content()
	{
		cout << "Java学习视频链接" << endl;
	}
	
};

//Python学习界面
class Python:public BasePage
{

public:
	void content()
	{
		cout << "Python学习视频链接" << endl;
	}
	
};
//C++学习界面
class CPP:public BasePage
{
public:
	void content()
	{
		cout << "C++学习视频链接" << endl;
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