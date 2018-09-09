/*******************************
 *FileName:main.cpp
 *Function:面向对象编程
 *Author:MichaelBeechan
 *Time:2018.9.8
 *Description:
 *Copyright:2018-2020
 ********************************
 */
 //面向对象编程-----------难点
 //构造函数与析构函数-----重点
 //this指针--------------- 重点
 /**
 面向对象：基于对象概念，以对象为中心，以类和继承为构造机制，来认识，理解、刻画客观世界和设计、构建相应的软件系统
 对象是由数据和容许的操作组成的封装体，与客观实体有直接对应关系
 */
 /**
 抽象：从具体事物抽取共同的本质特征
 C++的类：类是一种将抽象转换为用户定义类型的工具
           将数据表示和操作数据的方法组合成一个整体
           类的实例称为对象   对象的集合称为类
           类的变量和函数称为成员
 */
 /**
 类的声明
 class 类名{};     class LandOwner{};
 struct 类名{};    struct Hero{};
 唯一区别在于使用class声明的类型默认成员是私有的private，而struct生命的类型默认成员是公有的public
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
    LandOwner_1 landOwner_1;  //声明了一个LandOwner_1类型的变量landOwner_1
    //调用对象的成员方法
    //landOwner_1.cards[0] = 9;   //不能直接使用对象的私有成员
    landOwner_1.TouchCard(100);

    LandOwner_2 landOwner_2;
    landOwner_2.name = "Michael";
    landOwner_2.TouchCard(20);

    LandOwner_3 landOwner_3;
    landOwner_3.name = "巴依老爷";
    landOwner_3.SetScore(-9);
    landOwner_3.ShowScore();   //负数输入 输出0

    LandOwner_4 landOwner_4;
    landOwner_4.Setname("Rui");
    landOwner_4.Setscore(100);
    landOwner_4.ShowScore();

    Student stu1;
    Student stu2("Michael", "普通家庭");
    Student stu3(45);
    Student stu4 = 50;

    stu2.ShowInfo();

    Student* stu5 = new Student("杰克", "大牛");   //指针
    stu5->ShowInfo();

    //当对象使用完毕，记得释放内存
    delete stu5;

    return 0;
}
