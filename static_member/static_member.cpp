#define _CRT_SECURE_NO_WARNINGS 1

using namespace std;
#include<string>
#include<fstream>
#include<iostream>

//��̬��Ա����
//���ж�����ͬһ������
//�ڱ���׶η����ڴ�
//���������������ʼ��
//��̬��Ա����
//��̬��Ա����
//���г�Ա����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
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