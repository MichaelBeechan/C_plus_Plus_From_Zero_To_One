/*******************************
 *FileName:Array.cpp
 *Function:��̬�����鸳ֵ
 *Author:MichaelBeechan
 *Time:2018.8.27
 *Description:
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>

using namespace std;

int main()
{
    const int N = 5;
    int num[N];
    cout << "����Ĵ�С��" << sizeof(num) / sizeof(int) << endl;
    for(int i = 0; i < N; i ++){
        cout << "�������" << (i + 1) << "������Ԫ��: ";
        cin >> num[i];
    }
    for(int i = 0; i < N; i ++){
        cout << num[i] << endl;
    }
    return 0;
}
