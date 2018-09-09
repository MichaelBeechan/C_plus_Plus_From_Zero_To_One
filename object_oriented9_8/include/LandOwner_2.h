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
        LandOwner_2();   //构造函数得声明
        virtual ~LandOwner_2();  //析构函数的声明
        void TouchCard(int);  //声明摸牌方法
        void ShowScore();        //声明显示积分方法

    protected:


};

#endif // LANDOWNER_2_H
