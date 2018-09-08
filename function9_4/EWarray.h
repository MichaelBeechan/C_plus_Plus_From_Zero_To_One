#ifndef EWARRAY_H_INCLUDED
#define EWARRAY_H_INCLUDED
//二维数组的传参
#include <iostream>

using namespace std;

void show2(const double (*)[5], int);

void show2(const double (*arr)[5], int len)
{
    for(int i = 0; i < len; i ++)
    {
        for(int j = 0; j < 5; j ++)
        {
            cout << arr[i][j] << endl;
        }
        cout << endl;
    }
}


#endif // EWARRAY_H_INCLUDED
