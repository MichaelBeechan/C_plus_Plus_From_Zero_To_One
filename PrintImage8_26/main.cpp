/*******************************
 *FileName:PrintImage.cpp
 *Function:Ƕ��ѭ����ӡͼ��
 *Author:MichaelBeechan
 *Time:2018.8.26
 *Description:���ѭ�������У����������У� �ڲ�ѭ�������У��������е�ͼ�Σ�
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>

using namespace std;
/**
#####*
####***
###*****
##*******
#*********
##*******
###*****
####***
#####*
"#"�ŵĹ��ɣ�
*/
//�����ڿյĴ�ӡ�Ǻſ������Ϊ��j�Ǽ�ֵ������´�ӡ�Ǻţ������ӡ�ո�
int main()
{
    for(int i = 0; i < 5; i ++)
    {
        for(int j = 0; j <= 4 - i ; j ++)
        {
            cout << " ";
        }
        for(int j = 0; j <= 2 * i; j ++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < 4; i ++)
    {
        //j�Ǽ�ֵ������´�ӡ�Ǻţ������ӡ�ո�
        for(int j = 0; j <= i + 1 ; j ++)
        {
            cout << " ";
        }
        for(int j = 0; j <= 6 - 2 * i; j ++)
        {
            if(j == 0 || j == 6 - 2 * i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }

        }
        cout << endl;
    }
    return 0;
}
