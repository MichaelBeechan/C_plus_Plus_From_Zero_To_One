/*******************************
 *FileName:main.cpp
 *Function:��������
 *Author:MichaelBeechan
 *Time:2018.9.8
 *Description:
 1�����������һ�����֣����ñ����ʼ�� �Ա����ķ�ʽ��ʼ��
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>
#include "back_reference.hpp"
//������ֱ�����ó���
//double& d = 12.6;        //����
//��������һ�µķ�ʽ
//const double& d = 12.6;  //�Ϸ���
//ʹ������ʱ������Ҫ������Ч�ԣ�����ʹ�����ñ�ָ���Ч�ʸ�
using namespace std;

/*int& sum() //�����������͵ĺ���  ������Ҫ���ؾֲ�����������
{
    int num = 10;
    //ע�⣺rNum����sum()�����ж���ģ����Խоֲ�����
    //rNum����������ֻ��sum()������   ��˱Ƚ���������
    int& rNum = num;
    //�����еľֲ������ᱻ�ڴ����
    //��ν���ڴ���ղ����ǰ��ڴ��б������������
    //����ָ�ڴ�����ĳ������������ڴ��Ѿ����������
    return rNum;   //������һ���ֲ���������
}
/*void test()
{
    int x = 10;
    int y = 45;
    int z = 1024;
    //int w = 889;
}*/

int main()
{
    int num = 10;
    int& result1 = sum(num);
    sum(num) = 55; //��������
    //���麯�����������޸�Ϊconst,��const int& sum(int&)��˵Ļ��������Ͳ��Ϸ��ˣ���Ϊ�����޸���
    cout << result1 << endl;   //���55
    /*int num1 = 10;
    int num2 = 15;
    int& result = sum(num1, num2);
    cout << result << endl;
    /*int& result = sum();
    test();
    cout << "result = " << result << endl;
    /*
    int num1 = 10, num2 = 5;
    swap1(num1, num2);
    Show(num1, num2);
    //cout << "ִ��swap1��" << num1 <<'\t' << num2 << endl;
    swap2(&num1, &num2);
    Show(num1, num2);
    //cout << "ִ��swap2��" << num1 <<'\t' << num2 << endl;
    swap3(num1, num2);
    Show(num1, num2);
    //cout << "ִ��swap3��" << num1 <<'\t' << num2 << endl;
    */
    return 0;
}

