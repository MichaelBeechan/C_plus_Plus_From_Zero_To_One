/*******************************
 *FileName:
 *Function:ָ���ʹ��
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


    //���������  ����������� double[]����
    double score[] {45, 58, 74, 55, 77};
    double *ptr_score = score;

    cout << sizeof(score) << '\t' << sizeof(ptr_score) << endl;


    /*
    //���á�����������  �����ñ����ʼ��
    //���ò��Ƕ���ֻ��Ϊһ���Ѵ��ڵĶ�����ı���
    //����ֻ�ܰ��ڶ����ϣ�����������ֵ����ĳ�����ʽ�ļ���������һ��  int &ref_value = 10(�����)
    //����const�����ǿ��Ե� �磺const int &ref-value = 100;
    //���ñ����ʼ��������ʹ������֮ǰ����Ҫ��������Ч�ԣ����ʹ�����ÿ��ܻ��ʹ��ָ��Ч�ʸ���
    int int_value = 1024;
    int& refValue = int_value;
    cout << refValue << endl;

    int num = 1024;
    int& rel_num = num;
    rel_num = 104;
    cout << &num  << '\t' << &rel_num << '\t' << num << endl;

    /*
    //void* ָ��
    double num = 3.14;
    double *ptr_num1 = &num;
    void *ptr_num2 = &num;
    cout << boolalpha;
    cout << (ptr_num1 == ptr_num2) << endl;


    /** ��ָ�� nullptr ��ָ�벻ָ���κζ�������ͼʹ��һ��ָ��֮ǰ�������ȼ���Ƿ�Ϊ��*/
    /*
    //δ��ʼ����ָ����Ұָ��
    int *ptr1 = nullptr; //�ȼ���int *ptr1 = 0;
    int *ptr2 = 0;
    int *ptr3 = NULL;  //����cstdlib

    /*
    char ch = 'a';
    char * ptr_ch = &ch;
    char* ptr_cd = &ch;
    cout << (void *)ptr_ch << endl;  //��ַ void*��������
    cout << (void*)ptr_cd << endl;
    /*
    double num = 1024.0;
    //����һ��ָ�룬ָ��num����
    double* ptr_num  = &num;
    cout << "ptr_num��ֵ��" << ptr_num << endl;
    cout << "ptr_numָ��ռ��ֵ��" << *ptr_num << endl;
    */
    return 0;
}
