/*******************************
 *FileName:main.cpp
 *Function:����ָ��:�ȶ��庯����Ȼ���庯��ָ��
 *Author:MichaelBeechan
 *Time:2018.9.4
 *Description:
 ����Ҳ�е�ַ�������ĵ�ַ�Ǵ洢��������Դ�����ڴ濪ʼ��ַ
                �ô��������ڲ�ͬ��ʱ��ʹ�ò�ͬ�ĺ���
 *Copyright:2018-2020
 ********************************
 */
 /******************************
 //����ԭ��
 double sum(double, double);
 //����ָ������
 double (*ptrsum)(double, double);
 *******************************/
#include <iostream>
#include "func_ptr.h"
using namespace std;

int main()
{
    //int power(int, int);
    //��������ָ��
    int (*ptrPower)(int, int);
    //�������ĺ���ָ��ָ�������Ա����
    ptrPower = power;
    cout << ptrPower(3, 3) << endl;


    //���庯��ָ��
    double (*ptrCalc)(double, double);
    //������ȼ�  ʹ��auto�����ʼ��
    //auto ptrCalc = addition;
    //typedef double (*ptrCalc)(double, double);  //ptrCalc��һ���µ�����


    //����ָ������
    //double (*ptrCalc[])(double, double);
    double num1, num2;
    char op;
    cout << "����������Ҫ���������";
    cin >> num1 >> num2;
    cout << "�������������";
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
    //����
    print_result(ptrCalc, num1, num2);
    return 0;
}
