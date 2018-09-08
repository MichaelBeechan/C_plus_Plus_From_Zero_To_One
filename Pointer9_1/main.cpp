/*******************************
 *FileName:
 *Function:指针的使用
 *Author:MichaelBeechan
 *Time:2018.9.1
 *Description:
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{


    //数组的类型  下面的类型是 double[]类型
    double score[] {45, 58, 74, 55, 77};
    double *ptr_score = score;

    cout << sizeof(score) << '\t' << sizeof(ptr_score) << endl;


    /*
    //引用————别名  且引用必须初始化
    //引用并非对象，只是为一个已存在的对象起的别名
    //引用只能绑定在对象上，不能与字面值或者某个表达式的计算结果绑定在一起  int &ref_value = 10(错误的)
    //但是const引用是可以的 如：const int &ref-value = 100;
    //引用必须初始化，所以使用引用之前不需要测试其有效性，因此使用引用可能会比使用指针效率更高
    int int_value = 1024;
    int& refValue = int_value;
    cout << refValue << endl;

    int num = 1024;
    int& rel_num = num;
    rel_num = 104;
    cout << &num  << '\t' << &rel_num << '\t' << num << endl;

    /*
    //void* 指针
    double num = 3.14;
    double *ptr_num1 = &num;
    void *ptr_num2 = &num;
    cout << boolalpha;
    cout << (ptr_num1 == ptr_num2) << endl;


    /** 空指针 nullptr 空指针不指向任何对象，在试图使用一个指针之前可以首先检查是否为空*/
    /*
    //未初始化的指针是野指针
    int *ptr1 = nullptr; //等价于int *ptr1 = 0;
    int *ptr2 = 0;
    int *ptr3 = NULL;  //包含cstdlib

    /*
    char ch = 'a';
    char * ptr_ch = &ch;
    char* ptr_cd = &ch;
    cout << (void *)ptr_ch << endl;  //地址 void*任意类型
    cout << (void*)ptr_cd << endl;
    /*
    double num = 1024.0;
    //声明一个指针，指向num变量
    double* ptr_num  = &num;
    cout << "ptr_num的值：" << ptr_num << endl;
    cout << "ptr_num指向空间的值：" << *ptr_num << endl;
    */
    return 0;
}
