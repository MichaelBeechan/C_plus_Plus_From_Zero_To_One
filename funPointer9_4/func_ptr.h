#ifndef FUNC_PTR_H_INCLUDED
#define FUNC_PTR_H_INCLUDED

#include <iostream>

using namespace std;

int power(int, int);
//�Զ��������
double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);
//���庯��ָ��
/** ��ӡ������*/
void print_result(double (*)(double, double), double, double);
void print_result(double (*ptrCalc)(double, double), double num1, double num2)
{
    //���ú�������ӡ���
    double result = ptrCalc(num1, num2);
    cout << "���Ϊ��" << result << endl;
}
//num1��num2����
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
        cout << "����Ϊ0���Ƿ���" << endl;
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
