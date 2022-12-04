#define _CRT_SECURE_NO_WARNINGS 1

using namespace std;
#include<string>
#include<fstream>
#include<iostream>

//静态成员变量
//所有对象共享同一份数据
//在编译阶段分配内存
//类内声明，类外初始化
//静态成员函数
//静态成员函数
//所有成员共享同一个函数
//静态成员函数只能访问静态成员变量
class A
{
public:
	static int m;
	static int test(int x);

};
int A::m = 10;
static int test(int x)
{



}
void test01(A &m1)
{
	cout << m1.m << endl;
	m1.m = 15;
}
int main(char argc, char** argv)
{
	A m1;
	test01(m1);
	//m1.m = 20;
	test01(m1);
	A M2;
	test01(M2);

	return 0;
}