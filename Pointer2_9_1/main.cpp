/*******************************
 *FileName:
 *Function:ָ��Ķ�̬�����ڴ�
 *Author:MichaelBeechan
 *Time:2018.9.1
 *Description:
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>

using namespace std;
int num1 = 0; //ȫ�ֳ�ʼ����
int * ptr1;    //ȫ��δ��ʼ����
int main()
{

    //ջ�� stack
    //�ɱ������Զ������ͷţ�һ���ź����Ĳ���ֵ���ֲ�������ֵ��
    //������ʽ�������ݽṹ�е�ջ-�Ƚ��ȳ�
    int num2;
    char str[] = "Michael";
    char * ptr2;
    char * ptr3 = "Michael";
    //���� heap
    //һ���ɳ���Ա�����ͷţ�������Ա���Ƿţ��������ʱ�����ɲ���ϵͳ�ջ�
    //ע�⣺�����ݽṹ�еĶ��������£����䷽ʽ��������
    ptr1 = new int[10];
    ptr2 = new char[20];
    //ȫ��������̬��-static��
    static int num3 = 1024;
    //���ֳ��������ַ����Ĵ洢
    //�������������ź�����Ķ����ƴ���
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

    cout << sizeof(num) << endl;    //20   ����ʱ����
    cout << sizeof(nums) << endl;   //4    ����ʱ����

    //ʹ��new�����ڴ�
    //ָ������������֮�أ������н׶η���δ�������ڴ��Դ洢ֵ
    //�����н׶�Ϊһ��intֵ����δ�������ڴ�
    //ʹ��ָ�������ʣ�ָ�����ֵ����->�ң�
    int* ptr_int = new int; //����ʱ����
    //ptr_int ��ջ��   new int ��ʾ�ڶ�������һ��int�͵Ŀռ�

    delete ptr_int;//�ͷ��ڴ�  ������ɶԴ���
    //*/
    return 0;
}
