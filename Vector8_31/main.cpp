/*******************************
 *FileName:Test.cpp
 *Function:vector
 *Author:MichaelBeechan
 *Time:2018.8.31
 *Description:
 *向量容器:
 *动态数组，可以在运行阶段设置长度
 *具有数组的快速索引方式
 *可以插入和删除元素
 *vector<double> vec1;
 *vector<string> vec2(5);
 *vector<int> vec3(20, 998);
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //double nums[] = {};
    vector<double> vec1 = {98.5, 54, 545, 54, 44.5};
    vec1.push_back(100);
    //遍历1
    for(int i = 0; i < vec1.size(); i ++)
    {
        cout << vec1[i] << endl;
    }
    //遍历2 集合的通用遍历方法，使用迭代器 iterator
    vector<double>::iterator it;  //得到迭代器对象，实际上是一个指针对象
    //it.begin()   it.end()
    //for(it = vec1.begin(); it != vec1.end(); ++ it)
    //{
    //    cout << *it << endl;
    //}
    //排序
    sort(vec1.begin(), vec1.end());
    //逆序
    reverse(vec1.begin(), vec1.end());
    for(it = vec1.begin(); it != vec1.end(); ++ it)
    {
        cout << *it << endl;
    }
    return 0;
}
