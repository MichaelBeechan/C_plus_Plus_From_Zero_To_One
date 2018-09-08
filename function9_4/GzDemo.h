#ifndef GZDEMO_H_INCLUDED
#define GZDEMO_H_INCLUDED
#include <iostream>
using namespace std;
//函数定义
void input(int [], int);
void print(const int [], int);
void show(const int [], int);
//函数实现
void input(int values[], int len)
{
    if(len > 5)
    {
        cout << "超生了》》》" << endl;
        cout << "数组长度只能是5以内《《《" << endl;
        return;
    }
    string valueNames[] {"体力", "智力", "魅力", "道德", "气质"};
    for(int i = 0; i < len; i ++)
    {
        cout << valueNames[i] << ": ";
        cin >> values[i];

    }
}
void print(const int values[], int len)
{
    string valueNames[] {"体力", "智力", "魅力", "道德", "气质"};
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
