/*******************************
 *FileName:Test.cpp
 *Function:ʹ��ѭ��ʵ�������������룬�����˳�ϵͳ
 *Author:MichaelBeechan
 *Time:2018.8.26
 *Description:
 *Copyright:2018-2020
 ********************************
 */
 //������20����   ����17��
#include "LandOwner.hpp"
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <algorithm>

LandOwner::LandOwner()
{
    //ctor
    SetName("Ĭ�ϵ���");
    SetSex("����");
    SetExp(0);
    SetGold(1000);
    cout << "LandOwner()" << endl;
    InitCards();

}

LandOwner::LandOwner(string name):m_Name(name)
{
    SetSex("����");
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
    cout << "�ǳƣ�" << GetName() << endl;
    cout << "�Ա�" << GetSex() << endl;
    cout << "���飺" << GetExp() << endl;
    cout << "��ң�" << GetGold() << endl;
}
void LandOwner::InitCards()  //��ʼ��packCards,surplusCards,currCards
{
    //����Ĭ�ϵ�һ���˿���
    for(int i = 0; i < 54; i ++)
    {
        packCards.push_back(i + 1);
        surplusCards.push_back(packCards.at(i));
    }
    currCards.clear();

    ShowCards(packCards);   //����
}
void LandOwner::ShowCards(const vector<int>& cards)  //��ʾ����
{
    /*//c����д��
    for(int i = 0; i < cards.size(); i ++)
    {
        cout << cards[i] << ",";
    }
    cout << endl;*/
    /*//ʹ�õ�����
    for(vector<int>::const_iterator it = cards.begin(); it != cards.end(); it ++)
    {
        cout << *it << ",";
    }
    cout << endl;*/
    /*ʹ��C++11�������ƶ�
    for(auto it = cards.begin(); it != cards.end(); it ++)
    {
        cout << *it << ",";
    }
    cout << endl;*/
    //for ������� C++11
    for(auto card : cards){
        cout << card << ":" << getColor(card) << "." << getValue(card) << ",";
    }
    cout << endl;
    //ʹ���㷨�ķ�ʽ�������������ݸ��Ƶ�cout�󶨵ĵ�������
    //#include <iterator>  #include<algorithm>
    //copy(cards.cbegin(), cards.cend(), ostream_iterator<int> (cout, ","));
    //cout << endl;

}
void LandOwner::TouchCard(int cardCount)
{
    srand(time(NULL)); //ʱ������
    //�������һ��ʣ���Ƽ������е��ƣ���ӵ�currCards�����У���surplusCards��ɾ��������
    for(int i = 0; i < cardCount; i ++)
    {
        int randIndex = rand() % 54;  //0-53֮����������
        //�жϣ�������ɵ��������Ƿ���ʣ���Ƶ���
        if(isContains(packCards[randIndex])){
            currCards.push_back(packCards[randIndex]);
            //��ʣ���Ƽ���ɾ��
            deleteCard(surplusCards, packCards[randIndex]);
        }else{
            i --;   //��������
        }
    }
    cout << "<��������>->>-��ǰ�������£�" << endl;
    ShowCards(currCards);
    cout << "<�������ƺ�>->>-ʣ�����棺" << endl;
    ShowCards(surplusCards);
}
bool LandOwner::isContains(int cardNum)
{
    //ʹ���㷨����
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
    //ʹ���㷨ɾ��
    auto iter = find(cardVec.begin(), cardVec.end(), card);
    if(iter != cardVec.end())
    {
        cardVec.erase(iter);
    }
}
string LandOwner::getColor(int card)  //card�����±�
{
    if(card == 53) return "С��";
    if(card == 54) return "����";
    string colors[] {
        "����", "����", "��Ƭ", "÷��"
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
    cout << GetName() << "���ͷ�" << endl;
}
