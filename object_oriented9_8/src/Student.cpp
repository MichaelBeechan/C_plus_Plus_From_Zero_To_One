/*******************************
 *FileName:Test.cpp
 *Function:
 *Author:MichaelBeechan
 *Time:2018.8.26
 *Description:
 *Copyright:2018-2020
 ********************************
 */
#include "Student.h"

Student::Student()
{
    cout << "Ĭ�Ϲ���" << endl;
}

Student::Student(string name, string desc)
{
    cout << "ʹ�ô��ι��죺Student::Student(string name, string desc)" << endl;
    //m_Name = name;   //�ȼ�д��
    SetName(name);
    m_Desc = desc;
}

//����������µ�д��  :��ʼ�������б�
/**
Student::Student(string name, string desc):m_Name(name), m_Desc(desc)   //:��ʼ�������б�
{
    cout << "ʹ�ô��ι��죺Student::Student(string name, string desc)" << endl;
    //m_Name = name;   //�ȼ�д��
    //SetName(name);
    //m_Desc = desc;
}
*/

void Student::ShowInfo()
{
    cout << m_Desc << m_Name << endl;
}
Student::Student(int age)
{
    cout << "ʹ�ô��ι��죺Student::Student(int age)" << endl;
    //m_Age = age;
    SetAge(age);
}

Student::~Student()
{
    //dtor
    //�ͷ�ջ�ڴ�   ���ڴ�δ�ͷ�
    cout << m_Name << "���ͷ�" << endl;
}
