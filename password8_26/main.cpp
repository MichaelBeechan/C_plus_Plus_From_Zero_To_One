/*******************************
 *FileName:Test.cpp
 *Function:ʹ��ѭ��ʵ�������������룬�����˳�ϵͳ
 *Author:MichaelBeechan
 *Time:2018.8.26
 *Description:
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //ʹ��ѭ��ʵ�������������룬�����˳�ϵͳ
    string Init_password;        //���ó�ʼ����
    string password;
    int loop = 0;                //ѭ������
    cout << "��������ĳ�ʼ���룺";
    cin >> Init_password;
    cout << "��ʼ����������ɣ�����" << endl;
    while(loop < 3)
    {
        cout << "���������룺";
        cin >> password;
        cout << "������������ǣ�" << password << endl;
        loop ++;
        //�ж�����������Ƿ���ȷ
        if(password != Init_password)
        {
            if(loop == 3)
            {
                cout << "3�������������ϵͳǿ���˳���" << endl;
                exit(0);     //#include<cstdlib>
            }
        }
        else{
            cout << "����������ȷ������Խ������������ˣ�����" << endl;
            exit(0);
        }
    }



    /*
    int n = 0;
    while(n ++ );
    cout << n << endl;
    */
    return 0;
}
