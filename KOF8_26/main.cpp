/*******************************
 *FileName:Test.cpp
 *Function:KOF拳皇
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
    /** 使用循环模拟拳皇对战*/
    int hp1 = 100;    //角色1HP
    int hp2 = 100;    //角色2HP

    int attack1 = 0;  //角色1的攻击力
    int attack2 = 0;  //角色2的攻击力

    int start = 5;    //最小攻击力
    int end = 10;     //最大攻击力

    int randNum;      //随机种子数（奇偶）

    srand(time(NULL)); //更新随机种子
    /** 模拟玩家出招，采用随机数奇偶决定谁先出招攻击*/
    while(hp1 > 0 && hp2 > 0)
    {
        randNum = rand();
        if(randNum % 2 == 1)
        {
            cout << "####角色1出招了####" << endl;
            attack1 = (int)(start + (end - start) * rand() / (RAND_MAX + 1.0));
            Sleep(500);
            attack2 = (int)(start + (end - start) * rand() / (RAND_MAX + 1.0));
            Sleep(500);
            hp2 -= attack1;
            hp1 -= attack2;
            cout << "角色1的攻击量：\t" << attack1 ;
            cout << "  角色2的攻击量：\t" << attack2 ;
            cout << "  角色2的剩余HP：\t" << hp2 ;
            cout << "  角色1的剩余HP：\t" << hp1 << endl;
        }else{
            cout << "####角色2出招了####" << endl;
            attack2 = (int)(start + (end - start) * rand() / (RAND_MAX + 1.0));
            Sleep(500);
            attack1 = (int)(start + (end - start) * rand() / (RAND_MAX + 1.0));
            Sleep(500);
            hp1 -= attack2;
            hp2 -= attack1;
            cout << "角色2的攻击量：\t" << attack2;
            cout << "  角色1的攻击量：\t" << attack1;
            cout << "  角色1的剩余HP：\t" << hp1;
            cout << "  角色2的剩余HP：\t" << hp2 << endl;
        }
    }
    cout << "角色1的HP：" << hp1 << endl;
    cout << "角色2的HP：" << hp2 << endl;
    return 0;
}
