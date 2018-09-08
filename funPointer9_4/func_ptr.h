#ifndef FUNC_PTR_H_INCLUDED
#define FUNC_PTR_H_INCLUDED

#include <iostream>

using namespace std;

int power(int, int);
//自定义计算器
double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);
//定义函数指针
/** 打印计算结果*/
void print_result(double (*)(double, double), double, double);
void print_result(double (*ptrCalc)(double, double), double num1, double num2)
{
    //调用函数，打印结果
    double result = ptrCalc(num1, num2);
    cout << "输出为：" << result << endl;
}
//num1的num2次幂
int power(int num1, int num2)
{
    int result = 1;
    for(int i = 0; i < num2; i ++)
    {
        result *= num1;
    }
    return result;
}

double addition(double num1, double num2)
{
    return num1 + num2;
}
double subtraction(double num1, double num2)
{
    return num1 - num2;
}
double division(double num1, double num2)
{
    if(num2 == 0){
        cout << "除数为0，非法了" << endl;
        return 0;
    }
    double result;
    return result = num1 / num2;
}
double multiplication(double num1, double num2)
{
    return num1 * num2;
}




#endif // FUNC_PTR_H_INCLUDED
