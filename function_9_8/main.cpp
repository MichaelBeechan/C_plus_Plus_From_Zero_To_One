/*******************************
 *FileName:main.cpp
 *Function:����
 *Author:MichaelBeechan
 *Time:2018.9.8
 *Description:
 ����������inline
 ��C++Ϊ��߳��������ٶ�������һ��Ľ�
 �볣�溯�����������ڱȱ�д��ʽ��
 �����ڱ�����ʱ�����л��Ʋ�ͬ
 ������ʹ�ú�������  �滻  ��������
 **ʹ���������ԣ�
 **�ں�������ǰ�ӹؼ���inline
 **�ں�������ǰ�ӹؼ���inline
 *Copyright:2018-2020
 ********************************
 */


#include <iostream>


#define S(num) num * num

using namespace std;

//�������滻
/** C++��inline�滻�˺궨��*/
inline int SS(int);
int main()
{
    int result1 = S(5);
    double result2 = S(2.5);
    int result3 = S(5 + 10);
    //�滻��5 + 10 * 5 + 10 = 65
    //�����ԼӸ�()
    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 << endl;   //���65
    int result4 = SS(5 + 10);
    cout << result4 << endl;   //���225
    return 0;
}
int SS(int num)
{
    return num*num;
}
