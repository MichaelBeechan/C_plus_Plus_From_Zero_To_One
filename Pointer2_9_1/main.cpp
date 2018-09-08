/*******************************
 *FileName:
 *Function:指针的动态分配内存
 *Author:MichaelBeechan
 *Time:2018.9.1
 *Description:
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>

using namespace std;
int num1 = 0; //全局初始化区
int * ptr1;    //全局未初始化区
int main()
{

    //栈区 stack
    //由编译器自动分配释放，一般存放函数的参数值、局部变量的值等
    //操作方式类似数据结构中的栈-先进先出
    int num2;
    char str[] = "Michael";
    char * ptr2;
    char * ptr3 = "Michael";
    //堆区 heap
    //一般由程序员分配释放，若程序员不是放，程序结束时可能由操作系统收回
    //注意：与数据结构中的堆是两回事，分配方式类似链表
    ptr1 = new int[10];
    ptr2 = new char[20];
    //全局区（静态区-static）
    static int num3 = 1024;
    //文字常量区：字符串的存储
    //程序代码区：存放函数体的二进制代码
    /*
    int * ptr = new int;
    *ptr = 90;
    delete ptr;
    int * ptr1 = ptr;
    cout << *ptr << endl;
    cout << *ptr1 << endl;
    /*
    int num[5];
    int * nums = new int[5];

    cout << sizeof(num) << endl;    //20   编译时分配
    cout << sizeof(nums) << endl;   //4    运行时分配

    //使用new分配内存
    //指针真正的用武之地：在运行阶段分配未命名的内存以存储值
    //在运行阶段为一个int值分配未命名的内存
    //使用指针来访问（指向）这个值（左->右）
    int* ptr_int = new int; //运行时分配
    //ptr_int 在栈区   new int 表示在堆区分配一块int型的空间

    delete ptr_int;//释放内存  与上面成对存在
    //*/
    return 0;
}
