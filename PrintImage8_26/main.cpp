/*******************************
 *FileName:PrintImage.cpp
 *Function:嵌套循环打印图形
 *Author:MichaelBeechan
 *Time:2018.8.26
 *Description:外层循环控制行（行数，换行） 内层循环控制列（列数，列的图形）
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
"#"号的规律：
*/
//对于挖空的打印星号可以理解为：j是极值的情况下打印星号，否则打印空格
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
        //j是极值的情况下打印星号，否则打印空格
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
