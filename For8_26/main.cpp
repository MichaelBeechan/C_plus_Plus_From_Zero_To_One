/*******************************
 *FileName:For.cpp
 *Function:循环打印1997年7月的月历
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
    //一直1997年7月1号（星期二），香港回归
    //1、定义变量
    int month;
    int day;              //7月一共有31天
    int dayOfweek;        //7月的第一天是星期二
    cout << "请输入月份：";
    cin >> month;
    cout << "请输入月份的第一天是星期";
    cin >> dayOfweek;
    if(month == 1 || 3 || 5 || 7 || 8 || 10 || 12)
    {
        day = 31;
    }else{
        day = 30;
    }
    /** 打印星期*/
    cout << "星期一\t星期二\t星期三\t星期四\t星期五\t星期六\t星期日" << endl;
    //打印\t   周几-1
    for(int i = 0; i < dayOfweek - 1; i ++)
    {
        cout << '\t';
    }
    /** 打印日子*/
    for(int i = 1; i <= day; i ++)
    {
        cout << i;
        //到底\n还是\t，需要根据i的值来判断
        //星期日\n
        if((i + dayOfweek - 1) % 7 == 0)
        {
            cout << '\n';
        }else{
            cout << '\t';
        }
    }
    cout << endl;
    //2、书写循环
    //3、书写循环体及循环条件

    return 0;
}
