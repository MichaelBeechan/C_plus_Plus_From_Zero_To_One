#ifndef LANDOWNER_3_H
#define LANDOWNER_3_H
#include <iostream>

using namespace std;

class LandOwner_3
{
    //ʡ����private  Ĭ��private
    long score;          //����  ������ֱ���ֵΪ��������ķ���������Ա����score�������ط�װ
    int cardds[20];
    public:
        string name;
        LandOwner_3();
        virtual ~LandOwner_3();
        void ShowScore();
        //ʹ�÷���������ʵ�ֶԳ�Ա������Get��Set����
        void SetScore(long lscore){
            if(lscore < 0){
                score = 0;
            }else{
                //��װ
                score = lscore;
            }
        }

};

#endif // LANDOWNER_3_H
