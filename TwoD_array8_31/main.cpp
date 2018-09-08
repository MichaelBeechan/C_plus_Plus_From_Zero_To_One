/*******************************
 *FileName:Test.cpp
 *Function:2维数组
 *Author:MichaelBeechan
 *Time:2018.8.31
 *Description:
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //使用二维数组
    string stu_names[] {"刘备", "关羽", "张飞"};
    string course_names[] {"语文", "数学", "英语"};
    const int ROW = 3; //sizeof(stu_names) / sizeof(stu_names[0])
    const int COL = 3;
    double scores[ROW][COL];
    for(int i =0; i < ROW; i ++)
    {
        for(int j = 0; j < COL; j ++)
        {
            cout << stu_names[i] << "的" << course_names[j] << "成绩：";
            cin >> scores[i][j];
        }
    }
    //打印结果
    cout << '\t';
    for(int i = 0; i < COL; i ++)
    {
        cout << course_names[i] << '\t';
    }
    cout << endl;
    for(int i = 0; i < ROW; i ++)
    {
        cout << stu_names[i] << '\t';
        for(int j = 0; j < COL; j ++)
        {
            cout << scores[i][j] << '\t';
        }
        cout << endl;
    }



    return 0;
}
