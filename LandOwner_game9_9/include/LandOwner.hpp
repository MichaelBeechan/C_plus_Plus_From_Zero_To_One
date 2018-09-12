#ifndef LANDOWNER_H
#define LANDOWNER_H

#include <iostream>
#include <vector>

using namespace std;

//地主类
class LandOwner
{
    private:
        string m_Name;
        string m_Sex;
        int m_Gold;
        long m_Exp;

        vector<int> packCards;     //默认的一副牌，从1-54
        vector<int> surplusCards;  //摸牌后，剩余的牌
        vector<int> currCards;     //当前玩家的手牌数组
        bool isContains(int);      //剩余牌集合中是否包含cardNum这个牌面
        void deleteCard(vector<int>&, int); // 删除集合中的数字
        string getColor(int);      //获得花色
        string getValue(int);      //获得牌面

    public:
        LandOwner();
        LandOwner(string);
        LandOwner(string, string, int, long);
        ~LandOwner();

        string GetName() { return m_Name; }
        void SetName(string val) { m_Name = val; }
        string GetSex() { return m_Sex; }
        void SetSex(string val) { m_Sex = val; }
        int GetGold() { return m_Gold; }
        void SetGold(int val) { m_Gold = val; }
        long GetExp() { return m_Exp; }
        void SetExp(long val) { m_Exp = val; }

        void TouchCard(int);  //摸牌
        void InitCards();     //初始化packCards,surplusCards,currCards

        void ShowInfo();
        void ShowCards(const vector<int>&);     //显示扑克牌

    protected:

};

#endif // LANDOWNER_H
