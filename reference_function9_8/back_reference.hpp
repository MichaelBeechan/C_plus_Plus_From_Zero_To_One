#ifndef BACK_REFERENCE_HPP_INCLUDED
#define BACK_REFERENCE_HPP_INCLUDED
#include <iostream>
using namespace std;

void swap1(int, int);
void swap2(int*, int*);
void swap3(int&, int&);
void Show(const int&, const int&);
int& sum(int&, int&);
int& sum(int&);

int& sum(int& num1)
{
    num1 ++;
    return num1;
}

void Show(const int& num1, const int& num2)
{
    //ϣ����ʾ�����У�ֻ��ʵ�ִ����������ʾ����
    //����ֹ��ʾ�����޸�num1��num2��ֵ����ֹ�����ڲ��޸����ò�����
    //����������ڲ�����ʹ���м�const
    cout << "ִ��swap��" << num1 << '\t' << num2 << endl;
}
void swap1(int num1, int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
void swap2(int* p1, int* p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void swap3(int& ref1, int& ref2)
{
    int temp;
    temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}
int& sum(int& num1, int& num2)
{
    num1 ++;
    num2 ++;
    //��������ʱ��Ҫ���������а��������ص����ö���
}
#endif // BACK_REFERENCE_HPP_INCLUDED
