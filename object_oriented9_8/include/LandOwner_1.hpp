#ifndef LANDOWNER_1_H
#define LANDOWNER_1_H
#include <iostream>
using namespace std;
/**
 *  .hpp�ļ�һ�����ʵ�ֵ�����������ͨ������ģ��������������ʵ�ֹ�������
 *  ���飺ֻҪ���Ǵ�ģ��,һ��ʹ��.h��Ϊͷ�ļ���׺��ʹ��.cpp�ļ���Ϊ������ʵ���ļ�
 */
class LandOwner_1
{
    private:
        string name;   //����������
        long score;    //�����Ļ���
        int cards[20]; //��������������

    public:
        LandOwner_1() {}   //ʵ����Ĭ�Ϲ��캯��
        ~LandOwner_1() {}  //ʵ����Ĭ����������
        inline void TouchCard(int cardCount)
        {
            //
            cout << name << "����" << cardCount << "����" << endl;
        }
        void ShowScore()
        {
            cout << name << "��ǰ�Ļ����ǣ�" << score << endl;
        }

    protected:


};

#endif // LANDOWNER_1_H
