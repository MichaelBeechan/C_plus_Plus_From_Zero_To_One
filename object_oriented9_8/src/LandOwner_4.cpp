/*******************************
 *FileName:Test.cpp
 *Function:ʹ��codeblock�����Զ�����Get��Set����
 *Author:MichaelBeechan
 *Time:2018.8.26
 *Description:
 *Copyright:2018-2020
 ********************************
 */
 #include "LandOwner_4.hpp"

LandOwner_4::LandOwner_4()
{
    //һ��ʹ�ù��캯�����г�Ա�����ĳ�ʼ��
    name = "Ĭ�ϵ���";
    score = 0;
    //���û������Ƴ�ʼ��Ϊ0
    memset(cards, 0, sizeof(cards));
    cout << "�޲ι��캯����Ĭ�Ϲ��캯����������" << endl;
    cout << "��ʼ���Ľ�����£�" << endl;
    cout << "���ƣ�" << name << endl;
    cout << "���֣�" << score << endl;
    cout << "�������飺";
    for(int i = 0; i < sizeof(cards) / sizeof(cards[0]); i ++)
    {
        cout << cards[i] << '\t';
    }
    cout << endl;
}
void LandOwner_4::ShowScore()   //::��������������
{
    cout << name << "����" << score << "�Ļ���" << endl;
}
LandOwner_4::~LandOwner_4()
{
    //dtor
}
