#ifndef LANDOWNER_3_H
#define LANDOWNER_3_H
#include <iostream>

using namespace std;

class LandOwner_3
{
    //省略了private  默认private
    long score;          //积分  解决积分被赋值为负数错误的方法，将成员变量score进行隐藏封装
    int cardds[20];
    public:
        string name;
        LandOwner_3();
        virtual ~LandOwner_3();
        void ShowScore();
        //使用方法、函数实现对成员变量的Get、Set方法
        void SetScore(long lscore){
            if(lscore < 0){
                score = 0;
            }else{
                //封装
                score = lscore;
            }
        }

};

#endif // LANDOWNER_3_H
