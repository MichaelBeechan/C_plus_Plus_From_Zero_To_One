/*******************************
 *FileName:For.cpp
 *Function:ѭ����ӡ1997��7�µ�����
 *Author:MichaelBeechan
 *Time:2018.8.26
 *Description:
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>

using namespace std;

int main()
{
    //һֱ1997��7��1�ţ����ڶ�������ۻع�
    //1���������
    int month;
    int day;              //7��һ����31��
    int dayOfweek;        //7�µĵ�һ�������ڶ�
    cout << "�������·ݣ�";
    cin >> month;
    cout << "�������·ݵĵ�һ��������";
    cin >> dayOfweek;
    if(month == 1 || 3 || 5 || 7 || 8 || 10 || 12)
    {
        day = 31;
    }else{
        day = 30;
    }
    /** ��ӡ����*/
    cout << "����һ\t���ڶ�\t������\t������\t������\t������\t������" << endl;
    //��ӡ\t   �ܼ�-1
    for(int i = 0; i < dayOfweek - 1; i ++)
    {
        cout << '\t';
    }
    /** ��ӡ����*/
    for(int i = 1; i <= day; i ++)
    {
        cout << i;
        //����\n����\t����Ҫ����i��ֵ���ж�
        //������\n
        if((i + dayOfweek - 1) % 7 == 0)
        {
            cout << '\n';
        }else{
            cout << '\t';
        }
    }
    cout << endl;
    //2����дѭ��
    //3����дѭ���弰ѭ������

    return 0;
}
