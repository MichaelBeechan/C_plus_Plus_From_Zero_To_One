/*******************************
 *FileName:Test.cpp
 *Function:使用codeblock工具自动生成Get和Set方法
 *Author:MichaelBeechan
 *Time:2018.8.26
 *Description:
 *Copyright:2018-2020
 ********************************
 */
 #include "LandOwner_4.hpp"

LandOwner_4::LandOwner_4()
{
    //一般使用构造函数进行成员变量的初始化
    name = "默认地主";
    score = 0;
    //将用户的手牌初始化为0
    memset(cards, 0, sizeof(cards));
    cout << "无参构造函数（默认构造函数）被调用" << endl;
    cout << "初始化的结果如下：" << endl;
    cout << "名称：" << name << endl;
    cout << "积分：" << score << endl;
    cout << "手牌数组：";
    for(int i = 0; i < sizeof(cards) / sizeof(cards[0]); i ++)
    {
        cout << cards[i] << '\t';
    }
    cout << endl;
}
void LandOwner_4::ShowScore()   //::作用域解析运算符
{
    cout << name << "得了" << score << "的积分" << endl;
}
LandOwner_4::~LandOwner_4()
{
    //dtor
}
