/*******************************
 *FileName:Test.cpp
 *Function:KOFȭ��
 *Author:MichaelBeechan
 *Time:2018.8.26
 *Description:
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main()
{
    /** ʹ��ѭ��ģ��ȭ�ʶ�ս*/
    int hp1 = 100;    //��ɫ1HP
    int hp2 = 100;    //��ɫ2HP

    int attack1 = 0;  //��ɫ1�Ĺ�����
    int attack2 = 0;  //��ɫ2�Ĺ�����

    int start = 5;    //��С������
    int end = 10;     //��󹥻���

    int randNum;      //�������������ż��

    srand(time(NULL)); //�����������
    /** ģ����ҳ��У������������ż����˭�ȳ��й���*/
    while(hp1 > 0 && hp2 > 0)
    {
        randNum = rand();
        if(randNum % 2 == 1)
        {
            cout << "####��ɫ1������####" << endl;
            attack1 = (int)(start + (end - start) * rand() / (RAND_MAX + 1.0));
            Sleep(500);
            attack2 = (int)(start + (end - start) * rand() / (RAND_MAX + 1.0));
            Sleep(500);
            hp2 -= attack1;
            hp1 -= attack2;
            cout << "��ɫ1�Ĺ�������\t" << attack1 ;
            cout << "  ��ɫ2�Ĺ�������\t" << attack2 ;
            cout << "  ��ɫ2��ʣ��HP��\t" << hp2 ;
            cout << "  ��ɫ1��ʣ��HP��\t" << hp1 << endl;
        }else{
            cout << "####��ɫ2������####" << endl;
            attack2 = (int)(start + (end - start) * rand() / (RAND_MAX + 1.0));
            Sleep(500);
            attack1 = (int)(start + (end - start) * rand() / (RAND_MAX + 1.0));
            Sleep(500);
            hp1 -= attack2;
            hp2 -= attack1;
            cout << "��ɫ2�Ĺ�������\t" << attack2;
            cout << "  ��ɫ1�Ĺ�������\t" << attack1;
            cout << "  ��ɫ1��ʣ��HP��\t" << hp1;
            cout << "  ��ɫ2��ʣ��HP��\t" << hp2 << endl;
        }
    }
    cout << "��ɫ1��HP��" << hp1 << endl;
    cout << "��ɫ2��HP��" << hp2 << endl;
    return 0;
}
