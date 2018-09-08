/*******************************
 *FileName:Array.cpp
 *Function:动态给数组赋值
 *Author:MichaelBeechan
 *Time:2018.8.27
 *Description:
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>

using namespace std;

int main()
{
    const int N = 5;
    int num[N];
    cout << "数组的大小：" << sizeof(num) / sizeof(int) << endl;
    for(int i = 0; i < N; i ++){
        cout << "请输入第" << (i + 1) << "个数组元素: ";
        cin >> num[i];
    }
    for(int i = 0; i < N; i ++){
        cout << num[i] << endl;
    }
    return 0;
}
