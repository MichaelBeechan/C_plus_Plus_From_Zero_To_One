/*******************************
 *FileName:main.cpp
 *Function:����
 *Author:MichaelBeechan
 *Time:2018.9.4
 *Description:
 *Copyright:2018-2020
 ********************************
 */
/**
    C++ standard library ���� STL
    �ַ���
    {�㷨������} --> ������

*/
/** ������Ҫ�أ�����ֵ����  ������  �����б�  eg��return_type functionName(paramenterList){ //������ }*/
/******************************
�Զ��庯��������д����
int sum(int, int); //����ԭ��
int main()
{
    //��������
    int result = sum(5, 3);
    return 0;
}
//��������
int sum(int num1, int num2)
{
    //����ʵ�ֵĴ���
    int snum = num1 + num2;
    return snum;
}
C++�з���ֵ���Ͳ��������飬�������������κ����ͣ����Խ�������Ϊ�ṹ���߶�����ɲ��ַ��أ�
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
