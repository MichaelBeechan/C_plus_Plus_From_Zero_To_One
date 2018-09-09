#ifndef LANDOWNER_1_H
#define LANDOWNER_1_H
#include <iostream>
using namespace std;
/**
 *  .hpp文件一般包含实现的内联函数，通常用于模板类这种声明与实现共存的情况
 *  建议：只要不是纯模板,一律使用.h作为头文件后缀，使用.cpp文件作为函数的实现文件
 */
class LandOwner_1
{
    private:
        string name;   //地主的名称
        long score;    //地主的积分
        int cards[20]; //地主的手牌数组

    public:
        LandOwner_1() {}   //实现了默认构造函数
        ~LandOwner_1() {}  //实现了默认析构函数
        inline void TouchCard(int cardCount)
        {
            //
            cout << name << "摸了" << cardCount << "张排" << endl;
        }
        void ShowScore()
        {
            cout << name << "当前的积分是：" << score << endl;
        }

    protected:


};

#endif // LANDOWNER_1_H
