#ifndef LANDOWNER_H
#define LANDOWNER_H

#include <iostream>
#include <vector>

using namespace std;

//������
class LandOwner
{
    private:
        string m_Name;
        string m_Sex;
        int m_Gold;
        long m_Exp;

        vector<int> packCards;     //Ĭ�ϵ�һ���ƣ���1-54
        vector<int> surplusCards;  //���ƺ�ʣ�����
        vector<int> currCards;     //��ǰ��ҵ���������
        bool isContains(int);      //ʣ���Ƽ������Ƿ����cardNum�������
        void deleteCard(vector<int>&, int); // ɾ�������е�����
        string getColor(int);      //��û�ɫ
        string getValue(int);      //�������

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

        void TouchCard(int);  //����
        void InitCards();     //��ʼ��packCards,surplusCards,currCards

        void ShowInfo();
        void ShowCards(const vector<int>&);     //��ʾ�˿���

    protected:

};

#endif // LANDOWNER_H
