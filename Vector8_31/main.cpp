/*******************************
 *FileName:Test.cpp
 *Function:vector
 *Author:MichaelBeechan
 *Time:2018.8.31
 *Description:
 *��������:
 *��̬���飬���������н׶����ó���
 *��������Ŀ���������ʽ
 *���Բ����ɾ��Ԫ��
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
    //����1
    for(int i = 0; i < vec1.size(); i ++)
    {
        cout << vec1[i] << endl;
    }
    //����2 ���ϵ�ͨ�ñ���������ʹ�õ����� iterator
    vector<double>::iterator it;  //�õ�����������ʵ������һ��ָ�����
    //it.begin()   it.end()
    //for(it = vec1.begin(); it != vec1.end(); ++ it)
    //{
    //    cout << *it << endl;
    //}
    //����
    sort(vec1.begin(), vec1.end());
    //����
    reverse(vec1.begin(), vec1.end());
    for(it = vec1.begin(); it != vec1.end(); ++ it)
    {
        cout << *it << endl;
    }
    return 0;
}
