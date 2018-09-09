/*******************************
 *FileName:Test.cpp
 *Function:使用循环实现三次密码输入，错误退出系统
 *Author:MichaelBeechan
 *Time:2018.8.26
 *Description:
 *Copyright:2018-2020
 ********************************
 */#include "LandOwner_2.h"

LandOwner_2::LandOwner_2()
{
    //ctor
}
//实现摸牌方法
void LandOwner_2::TouchCard(int cardCount)
{
    cout << name << "摸了" << cardCount << "张排" << endl;
}


LandOwner_2::~LandOwner_2()
{
    //dtor
}
