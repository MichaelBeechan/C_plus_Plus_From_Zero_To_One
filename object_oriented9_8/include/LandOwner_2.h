#ifndef LANDOWNER_2_H
#define LANDOWNER_2_H
#include <iostream>

using namespace std;

class LandOwner_2
{
    public:   //private
        string name;
        long  score;
        int cards[20];
    public:
        LandOwner_2();   //���캯��������
        virtual ~LandOwner_2();  //��������������
        void TouchCard(int);  //�������Ʒ���
        void ShowScore();        //������ʾ���ַ���

    protected:


};

#endif // LANDOWNER_2_H
