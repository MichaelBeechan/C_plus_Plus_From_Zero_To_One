#ifndef GZDEMO_H_INCLUDED
#define GZDEMO_H_INCLUDED
#include <iostream>
using namespace std;
//��������
void input(int [], int);
void print(const int [], int);
void show(const int [], int);
//����ʵ��
void input(int values[], int len)
{
    if(len > 5)
    {
        cout << "�����ˡ�����" << endl;
        cout << "���鳤��ֻ����5���ڡ�����" << endl;
        return;
    }
    string valueNames[] {"����", "����", "����", "����", "����"};
    for(int i = 0; i < len; i ++)
    {
        cout << valueNames[i] << ": ";
        cin >> values[i];

    }
}
void print(const int values[], int len)
{
    string valueNames[] {"����", "����", "����", "����", "����"};
    for(int i = 0; i < len; i ++)
    {
        cout << valueNames[i] << ": " << values[i] << endl;
    }
}

void show(const int valueArray[], int len)
{
    for(int i = 0; i  < len; i ++)
    {
        cout <<valueArray[i] << ", ";
    }
    cout << endl;
}

#endif // GZDEMO_H_INCLUDED
