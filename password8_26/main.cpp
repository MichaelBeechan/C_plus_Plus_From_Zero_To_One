/*******************************
 *FileName:Test.cpp
 *Function:使用循环实现三次密码输入，错误退出系统
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
    //使用循环实现三次密码输入，错误退出系统
    string Init_password;        //设置初始密码
    string password;
    int loop = 0;                //循环变量
    cout << "请设置你的初始密码：";
    cin >> Init_password;
    cout << "初始密码设置完成！！！" << endl;
    while(loop < 3)
    {
        cout << "请输入密码：";
        cin >> password;
        cout << "您输入的密码是：" << password << endl;
        loop ++;
        //判断输入的密码是否正确
        if(password != Init_password)
        {
            if(loop == 3)
            {
                cout << "3次密码输入错误，系统强制退出！" << endl;
                exit(0);     //#include<cstdlib>
            }
        }
        else{
            cout << "密码输入正确，你可以进行其他操作了！！！" << endl;
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
