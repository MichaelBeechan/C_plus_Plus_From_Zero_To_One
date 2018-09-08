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
    //希望显示函数中，只能实现传入参数的显示功能
    //而禁止显示函数修改num1，num2的值（禁止函数内部修改引用参数）
    //解决方案：在参数的使用中加const
    cout << "执行swap后：" << num1 << '\t' << num2 << endl;
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
    //返回引用时，要求函数参数中包含被返回的引用对象
}
#endif // BACK_REFERENCE_HPP_INCLUDED
