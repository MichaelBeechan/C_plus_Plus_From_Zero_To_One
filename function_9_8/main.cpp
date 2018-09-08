/*******************************
 *FileName:main.cpp
 *Function:函数
 *Author:MichaelBeechan
 *Time:2018.9.8
 *Description:
 内联函数：inline
 是C++为提高程序运行速度所做的一项改进
 与常规函数的区别不在于比编写方式，
 而在于被调用时的运行机制不同
 编译器使用函数代码  替换  函数调用
 **使用内联特性：
 **在函数声明前加关键字inline
 **在函数定义前加关键字inline
 *Copyright:2018-2020
 ********************************
 */


#include <iostream>


#define S(num) num * num

using namespace std;

//内联：替换
/** C++用inline替换了宏定义*/
inline int SS(int);
int main()
{
    int result1 = S(5);
    double result2 = S(2.5);
    int result3 = S(5 + 10);
    //替换：5 + 10 * 5 + 10 = 65
    //但可以加个()
    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 << endl;   //输出65
    int result4 = SS(5 + 10);
    cout << result4 << endl;   //输出225
    return 0;
}
int SS(int num)
{
    return num*num;
}
