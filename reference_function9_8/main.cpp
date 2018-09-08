/*******************************
 *FileName:main.cpp
 *Function:函数引用
 *Author:MichaelBeechan
 *Time:2018.9.8
 *Description:
 1、对象起的另一个名字，引用必须初始化 以变量的方式初始化
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>
#include "back_reference.hpp"
//不可以直接引用常亮
//double& d = 12.6;        //错误
//但可以用一下的方式
//const double& d = 12.6;  //合法的
//使用引用时，不需要测试有效性，所以使用引用比指针的效率高
using namespace std;

/*int& sum() //返回引用类型的函数  尽量不要返回局部变量的引用
{
    int num = 10;
    //注意：rNum是在sum()函数中定义的，所以叫局部变量
    //rNum的生存周期只在sum()函数中   因此比建议这样做
    int& rNum = num;
    //函数中的局部变量会被内存回收
    //所谓的内存回收并不是把内存中保存的设置清零
    //而是指内存中你的程序申请的这块内存已经不是你的了
    return rNum;   //返回了一个局部引用类型
}
/*void test()
{
    int x = 10;
    int y = 45;
    int z = 1024;
    //int w = 889;
}*/

int main()
{
    int num = 10;
    int& result1 = sum(num);
    sum(num) = 55; //函数引用
    //建议函数返回类型修改为const,即const int& sum(int&)如此的话上面语句就不合法了，因为不可修改了
    cout << result1 << endl;   //输出55
    /*int num1 = 10;
    int num2 = 15;
    int& result = sum(num1, num2);
    cout << result << endl;
    /*int& result = sum();
    test();
    cout << "result = " << result << endl;
    /*
    int num1 = 10, num2 = 5;
    swap1(num1, num2);
    Show(num1, num2);
    //cout << "执行swap1：" << num1 <<'\t' << num2 << endl;
    swap2(&num1, &num2);
    Show(num1, num2);
    //cout << "执行swap2：" << num1 <<'\t' << num2 << endl;
    swap3(num1, num2);
    Show(num1, num2);
    //cout << "执行swap3：" << num1 <<'\t' << num2 << endl;
    */
    return 0;
}

