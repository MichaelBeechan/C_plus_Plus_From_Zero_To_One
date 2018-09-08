/*******************************
 *FileName:main.cpp
 *Function:函数指针:先定义函数，然后定义函数指针
 *Author:MichaelBeechan
 *Time:2018.9.4
 *Description:
 函数也有地址：函数的地址是存储其机器语言代码的内存开始地址
                好处：可以在不同的时间使用不同的函数
 *Copyright:2018-2020
 ********************************
 */
 /******************************
 //函数原型
 double sum(double, double);
 //函数指针声明
 double (*ptrsum)(double, double);
 *******************************/
#include <iostream>
#include "func_ptr.h"
using namespace std;

int main()
{
    //int power(int, int);
    //声明函数指针
    int (*ptrPower)(int, int);
    //让声明的函数指针指向函数，以便调用
    ptrPower = power;
    cout << ptrPower(3, 3) << endl;


    //定义函数指针
    double (*ptrCalc)(double, double);
    //与上面等价  使用auto必须初始化
    //auto ptrCalc = addition;
    //typedef double (*ptrCalc)(double, double);  //ptrCalc是一个新的类型


    //函数指针数组
    //double (*ptrCalc[])(double, double);
    double num1, num2;
    char op;
    cout << "请输入两个要计算的数：";
    cin >> num1 >> num2;
    cout << "请输入运算符：";
    cin >> op;
    switch(op)
    {
    case '+':
        ptrCalc = addition;
        break;
    case '-':
        ptrCalc = subtraction;
        break;
    case '*':
        ptrCalc = multiplication;
        break;
    case '/':
        ptrCalc = division;
        break;
    }
    //调用
    print_result(ptrCalc, num1, num2);
    return 0;
}
