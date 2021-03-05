#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class Base1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son1:public Base1
{
public:
	void func()
	{
		m_a = 10;
	}
	void func1(int b)
	{
		m_b = b;
	}
	void print()
	{
		cout << m_b << endl;
	}
	
};
class Base2
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son2 :protected Base2
{
public:
	void func()
	{
		m_a = 100;    //保护继承之后，原本是公共属性的成员变成保护属性，在类外不可以访问
		m_b = 100;    //保护属性的成员还是保护属性
	}
};
class Base3
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son3 :private Base3
{
public:
	void func()
	{
		m_a = 11;
		m_b = 11;
	}

};
class Grandson2 :public son2
{
public:
	void func()
	{
		m_a = 1;     //protected
		m_b = 1;    //protected
	}
};
void test01()
{
	son1 s1;
	s1.func1(18);
	s1.print();
}
void test02()
{
	son2 s2;
	
	
}
void test03()
{
	son3 s3;
	
}
int main()
{
	test01();
	system("pause");
	return 0;
}