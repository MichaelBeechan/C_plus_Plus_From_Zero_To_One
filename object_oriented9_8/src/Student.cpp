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
    cout << "默认构造" << endl;
}

Student::Student(string name, string desc)
{
    cout << "使用带参构造：Student::Student(string name, string desc)" << endl;
    //m_Name = name;   //等价写法
    SetName(name);
    m_Desc = desc;
}

//上面可以如下的写法  :初始化参数列表
/**
Student::Student(string name, string desc):m_Name(name), m_Desc(desc)   //:初始化参数列表
{
    cout << "使用带参构造：Student::Student(string name, string desc)" << endl;
    //m_Name = name;   //等价写法
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
    cout << "使用带参构造：Student::Student(int age)" << endl;
    //m_Age = age;
    SetAge(age);
}

Student::~Student()
{
    //dtor
    //释放栈内存   堆内存未释放
    cout << m_Name << "被释放" << endl;
}
