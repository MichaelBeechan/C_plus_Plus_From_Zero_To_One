/*******************************
 *FileName:main.cpp
 *Function:函数
 *Author:MichaelBeechan
 *Time:2018.9.4
 *Description:
 *Copyright:2018-2020
 ********************************
 */
/**
    C++ standard library —— STL
    字符串
    {算法，容器} --> 迭代器

*/
/** 函数三要素：返回值类型  函数名  参数列表  eg：return_type functionName(paramenterList){ //函数体 }*/
/******************************
自定义函数的完整写法：
int sum(int, int); //函数原型
int main()
{
    //函数调用
    int result = sum(5, 3);
    return 0;
}
//函数定义
int sum(int num1, int num2)
{
    //函数实现的代码
    int snum = num1 + num2;
    return snum;
}
C++中返回值类型不能是数组，但可以是其他任何类型（可以将数组作为结构或者对象组成部分返回）
*******************************/
#include <iostream>
#include "GzDemo.h"
#include "EWarray.h"
using namespace std;


int main()
{
    double powers[3][5] = {
        {45.6, 87, 23.6, 15.2, 12.0},
        {45.2, 98, 25.6, 45.8, 19.3},
        {45.8, 36, 15.2, 75.3, 68.1}
    };
    int valuearray[] = {90, 56, 67, 98, 100};
    int values[5];
    input(values, sizeof(values) / sizeof(int));

    print(values, sizeof(values) / sizeof(int));
    show(valuearray, 5);
    // 90 56 67 98 100
    show(valuearray, 5);
    // 91 57 68 99 101
    show2(powers, 3);

    return 0;
}
