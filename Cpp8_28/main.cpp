#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>  //���Ʒ�
//#define PI 3.1415926

using namespace std;

int main()
{
    /*cout << "Ӣ�����ƣ��������֡���ϣ" << endl;
    cout << "�˺���56\t�������룺600\n"
         << "���ף�15.5(+3.4)\tħ����30(+0.0)\n"
         << "����ֵ��395(+79)\t�����ظ���0.9(+0.11)\n";*/
    //��ӡ��������֮������ϸ��Ϣ
    SetConsoleTitle("ʾ������ӡ��������֮������ϸ��Ϣ");
    /**  �˺� */
    double value_attack = 57.88;
    /**  �˺��ɳ�ֵ */
    double value_attack_growth = 4.5;
    /**  �������� */
    double value_attack_distance = 172;
    /**  ���� */
    double value_defence = 27.54;
    double value_defence_growth = 3.0;

    cout << "���ƣ���������֮��" << endl;
    cout << "�˺���" << value_attack << "(+" << value_attack_growth << ")\t"
         << "�������룺" << value_attack_distance << endl;
    cout << "���ף�" << value_defence << "(+" << value_defence_growth << ")" << endl;


    //1.ǿ����С���ķ�ʽ��ʾ
    cout << fixed;
    //2.������ʾ�ľ��ȣ�����#include<iomanip>��
    cout << setprecision(2);
    const double PI = 3.1415926;
    float radius = 4.5f;   //�뾶
    float height = 90.0f;   //��
    double volume = PI * pow(radius, 2) * height;
    cout << "Բ�����Ϊ�� " << volume << endl;

    return 0;
}
