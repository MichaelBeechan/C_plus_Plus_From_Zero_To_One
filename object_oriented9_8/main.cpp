/*******************************
 *FileName:main.cpp
 *Function:���������
 *Author:MichaelBeechan
 *Time:2018.9.8
 *Description:
 *Copyright:2018-2020
 ********************************
 */
 //���������-----------�ѵ�
 //���캯������������-----�ص�
 //thisָ��--------------- �ص�
 /**
 ������󣺻��ڶ������Զ���Ϊ���ģ�����ͼ̳�Ϊ������ƣ�����ʶ����⡢�̻��͹��������ơ�������Ӧ�����ϵͳ
 �����������ݺ�����Ĳ�����ɵķ�װ�壬��͹�ʵ����ֱ�Ӷ�Ӧ��ϵ
 */
 /**
 ���󣺴Ӿ��������ȡ��ͬ�ı�������
 C++���ࣺ����һ�ֽ�����ת��Ϊ�û��������͵Ĺ���
           �����ݱ�ʾ�Ͳ������ݵķ�����ϳ�һ������
           ���ʵ����Ϊ����   ����ļ��ϳ�Ϊ��
           ��ı����ͺ�����Ϊ��Ա
 */
 /**
 �������
 class ����{};     class LandOwner{};
 struct ����{};    struct Hero{};
 Ψһ��������ʹ��class����������Ĭ�ϳ�Ա��˽�е�private����struct����������Ĭ�ϳ�Ա�ǹ��е�public
 */
#include <iostream>
#include "LandOwner_1.hpp"
#include "LandOwner_2.h"
#include "LandOwner_3.hpp"
#include "LandOwner_4.hpp"
#include "Student.h"

using namespace std;

int main()
{
    LandOwner_1 landOwner_1;  //������һ��LandOwner_1���͵ı���landOwner_1
    //���ö���ĳ�Ա����
    //landOwner_1.cards[0] = 9;   //����ֱ��ʹ�ö����˽�г�Ա
    landOwner_1.TouchCard(100);

    LandOwner_2 landOwner_2;
    landOwner_2.name = "Michael";
    landOwner_2.TouchCard(20);

    LandOwner_3 landOwner_3;
    landOwner_3.name = "������ү";
    landOwner_3.SetScore(-9);
    landOwner_3.ShowScore();   //�������� ���0

    LandOwner_4 landOwner_4;
    landOwner_4.Setname("Rui");
    landOwner_4.Setscore(100);
    landOwner_4.ShowScore();

    Student stu1;
    Student stu2("Michael", "��ͨ��ͥ");
    Student stu3(45);
    Student stu4 = 50;

    stu2.ShowInfo();

    Student* stu5 = new Student("�ܿ�", "��ţ");   //ָ��
    stu5->ShowInfo();

    //������ʹ����ϣ��ǵ��ͷ��ڴ�
    delete stu5;

    return 0;
}
