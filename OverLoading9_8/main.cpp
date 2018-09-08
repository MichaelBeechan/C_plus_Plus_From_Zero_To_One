/*******************************
 *FileName:main.cpp
 *Function:重载
 *Author:MichaelBeechan
 *Time:2018.9.8
 *Description:
 *指可以有多个同名的函数
 *函数名相同，参数列表不同（特征不同）
 *Copyright:2018-2020
 ********************************
 */
 //特别注意函数名相同时，参数列表一个是引用类型，一个是正常类型
 //eg:void eating(string food);   void eating(string& food);

 /** 特征标*/
 //重载-编译器在编译时，根据参数列表对函数进行重命名
 //调用方式如下——重载决议
 //void Swap(int a , int b);
 //Swap_int_int
 //void Swap(float a, float b);
 //Swap_float_float
#include <iostream>

using namespace std;

//使用重载实现数组的排序
void Sort(int[], int);
void Sort(float[], int);
void Sort(double[], int);
void Show(int[], int);
void Show(float[], int);
void Show(double[], int);
int main()
{
    int inumber[4] {54, 25, 11, 56};
    float fnumber[4] {78.5f, 23.1f, 4.5f, 88.6f};
    double dnumber[4] {78.9, 65.6, 79.3, 88.6};
    Sort(inumber, 4);
    Show(inumber, 4);
    Sort(fnumber, 4);
    Show(fnumber, 4);
    Sort(dnumber, 4);
    Show(dnumber, 4);
    return 0;
}
void Show(int number[], int len)
{
    for(int i = 0; i < len; i ++)
    {
        cout << number[i] << '\t';
    }
    cout << endl;
}void Show(float number[], int len)
{
    for(int i = 0; i < len; i ++)
    {
        cout << number[i] << '\t';
    }
    cout << endl;
}
void Show(double number[], int len)
{
    for(int i = 0; i < len; i ++)
    {
        cout << number[i] << '\t';
    }
    cout << endl;
}
//参数为数组时，会自动降为指针
void Sort(int nums[], int len)
{
    int temp;
    for(int i = 0; i < len - 1; i ++)
    {
        for(int j = 0; j < len - i - 1; j ++)
        {
            if(nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}

void Sort(float nums[], int len)
{
    float temp;
    for(int i = 0; i < len - 1; i ++)
    {
        for(int j = 0; j < len - i - 1; j ++)
        {
            if(nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}
void Sort(double nums[], int len)
{
    double temp;
    for(int i = 0; i < len - 1; i ++)
    {
        for(int j = 0; j < len - i - 1; j ++)
        {
            if(nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}
