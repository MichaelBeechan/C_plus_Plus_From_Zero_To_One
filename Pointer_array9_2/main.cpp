/*******************************
 *FileName:
 *Function:ָ��������������
 *Author:MichaelBeechan
 *Time:2018.9.2
 *Description:
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>

using namespace std;

int main()
{
    int array[] {45, 54, 7, 65, 78, 79, 87};
    int* p_start = array; //ָ���һ��Ԫ��
    int* p_end = array + sizeof(array) / sizeof(int) - 1;  //ָ�����һ��Ԫ��
    int temp;
    cout << "����ǰ��";
    for(int i = 0; i < sizeof(array) / sizeof(int); i ++)
    {
        cout << array[i] << '\t';
    }
    if((sizeof(array) / sizeof(int)) % 2 == 0)
    {

        /*���ַ���
        for(int i = 0; i < (sizeof(array) / sizeof(int)) / 2; i ++){
            temp = *p_start;
            *p_start = *p_end;
            *p_end = temp;
            p_start ++;
            p_end --;
        }*/
        while(p_start < p_end)
        {
            temp = *p_start;
            *p_start = *p_end;
            *p_end = temp;
            p_start ++;
            p_end --;
        }
    }else{
        while(p_start != p_end)
        {
            temp = *p_start;
            *p_start = *p_end;
            *p_end = temp;
            p_start ++;
            p_end --;
        }
    }
    cout << endl;
    cout << "�����";
    for(int i = 0; i < sizeof(array) / sizeof(int); i ++)
    {
        cout << array[i] << '\t';
    }



    return 0;
}
