#ifndef LANDOWNER_4_H
#define LANDOWNER_4_H
#include <iostream>
#include <memory.h>
using namespace std;
/**
构造函数：
以类名作为函数名
无返回值类型

*/
class LandOwner_4
{
    public:
        LandOwner_4();
        virtual ~LandOwner_4();
        void ShowScore();
        long Getscore() { return score; }
        void Setscore(long val) {
            if(val < 0)
            {
                score = 0;
            }else{
                score = val;
            }
        }
        string Getname() { return name; }
        void Setname(string val) { name = val; }
        //int Getcards[20]() { return cards[20]; }
        //void Setcards[20](int val) { cards[20] = val; }

    protected:

    private:
        long score;
        string name;
        int cards[20];
};

#endif // LANDOWNER_4_H
