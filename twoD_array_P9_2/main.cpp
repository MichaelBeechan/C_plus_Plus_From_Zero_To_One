/*******************************
 *FileName:
 *Function:��ά������ָ��
 *Author:MichaelBeechan
 *Time:2018.9.2
 *Description:
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>

using namespace std;

int main()
{
    //ʹ��ָ�봴����ά����   ��ά����
    int (*p2)[3] = new int[5][3];
    p2[3][2] = 990;

    cout << sizeof(p2) << endl;

    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 3; j ++){
            //cout << p2[i][j] << ',';
            cout << *(*(p2 + i) + j) << ',';
        }
        cout << endl;
    }

    return 0;
}
