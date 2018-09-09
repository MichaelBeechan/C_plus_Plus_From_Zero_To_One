/*******************************
 *FileName:Test.cpp
 *Function:用来演示封装的基本概念
 *Author:MichaelBeechan
 *Time:2018.8.26
 *Description:
 *Copyright:2018-2020
 ********************************
 */
 #include "LandOwner_3.hpp"

LandOwner_3::LandOwner_3()
{
    //ctor
}
void LandOwner_3::ShowScore()
{
    cout << name << "得了" << score << "的积分" << endl;
}
LandOwner_3::~LandOwner_3()
{
    //dtor
}
