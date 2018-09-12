/*******************************
 *FileName:Test.cpp
 *Function:使用循环实现三次密码输入，错误退出系统
 *Author:MichaelBeechan
 *Time:2018.8.26
 *Description:
 *Copyright:2018-2020
 ********************************
 */
 //地主摸20张牌   其他17张
#include "LandOwner.hpp"
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <algorithm>

LandOwner::LandOwner()
{
    //ctor
    SetName("默认地主");
    SetSex("保密");
    SetExp(0);
    SetGold(1000);
    cout << "LandOwner()" << endl;
    InitCards();

}

LandOwner::LandOwner(string name):m_Name(name)
{
    SetSex("保密");
    SetExp(0);
    SetGold(1000);
    cout << "LandOwner(string name)" << endl;
    InitCards();
}
LandOwner::LandOwner(string name, string sex, int gold, long exp):m_Name(name), m_Sex(sex), m_Gold(gold), m_Exp(exp)
{
    cout << "LandOwner(string name, string sex, int gold, long exp)" << endl;
    InitCards();
}
void LandOwner::ShowInfo()
{
    cout << "昵称：" << GetName() << endl;
    cout << "性别：" << GetSex() << endl;
    cout << "经验：" << GetExp() << endl;
    cout << "金币：" << GetGold() << endl;
}
void LandOwner::InitCards()  //初始化packCards,surplusCards,currCards
{
    //生成默认的一副扑克牌
    for(int i = 0; i < 54; i ++)
    {
        packCards.push_back(i + 1);
        surplusCards.push_back(packCards.at(i));
    }
    currCards.clear();

    ShowCards(packCards);   //测试
}
void LandOwner::ShowCards(const vector<int>& cards)  //显示牌面
{
    /*//c语言写法
    for(int i = 0; i < cards.size(); i ++)
    {
        cout << cards[i] << ",";
    }
    cout << endl;*/
    /*//使用迭代器
    for(vector<int>::const_iterator it = cards.begin(); it != cards.end(); it ++)
    {
        cout << *it << ",";
    }
    cout << endl;*/
    /*使用C++11的类型推断
    for(auto it = cards.begin(); it != cards.end(); it ++)
    {
        cout << *it << ",";
    }
    cout << endl;*/
    //for 区间遍历 C++11
    for(auto card : cards){
        cout << card << ":" << getColor(card) << "." << getValue(card) << ",";
    }
    cout << endl;
    //使用算法的方式，将容器的内容复制到cout绑定的迭代器中
    //#include <iterator>  #include<algorithm>
    //copy(cards.cbegin(), cards.cend(), ostream_iterator<int> (cout, ","));
    //cout << endl;

}
void LandOwner::TouchCard(int cardCount)
{
    srand(time(NULL)); //时间种子
    //随机生成一张剩余牌集合中有的牌，添加到currCards集合中，从surplusCards中删除这张牌
    for(int i = 0; i < cardCount; i ++)
    {
        int randIndex = rand() % 54;  //0-53之间的随机数字
        //判断：随机生成的这张牌是否在剩余牌当中
        if(isContains(packCards[randIndex])){
            currCards.push_back(packCards[randIndex]);
            //在剩余牌集合删除
            deleteCard(surplusCards, packCards[randIndex]);
        }else{
            i --;   //重新摸排
        }
    }
    cout << "<地主摸牌>->>-当前手牌如下：" << endl;
    ShowCards(currCards);
    cout << "<地主摸牌后>->>-剩余牌面：" << endl;
    ShowCards(surplusCards);
}
bool LandOwner::isContains(int cardNum)
{
    //使用算法查找
    vector<int>::iterator iter = find(surplusCards.begin(), surplusCards.end(), cardNum);
    if(iter == surplusCards.end()){
        return false;
    }else{
        return true;
    }
    //return iter == surplusCards.end();
}

void LandOwner::deleteCard(vector<int>& cardVec, int card)
{
    //使用算法删除
    auto iter = find(cardVec.begin(), cardVec.end(), card);
    if(iter != cardVec.end())
    {
        cardVec.erase(iter);
    }
}
string LandOwner::getColor(int card)  //card不是下标
{
    if(card == 53) return "小王";
    if(card == 54) return "大王";
    string colors[] {
        "黑桃", "红心", "方片", "梅花"
    };
    return colors[(card - 1) / 13];
}
string LandOwner::getValue(int card)
{
    if(card == 53) return "Black Jocker";
    if(card == 54) return "Red Jocker";
    string values[] {
        "A","2","3","4","5","6","7","8","9","10","J","Q","K"
    };
    return values[(card - 1) % 13];
}
LandOwner::~LandOwner()
{
    cout << GetName() << "被释放" << endl;
}
