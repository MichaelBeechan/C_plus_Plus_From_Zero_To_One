/*******************************
 *FileName:For.cpp
 *Function:����53����Ʒ�۸�
 *Author:MichaelBeechan
 *Time:2018.8.26
 *Description:���ݲµĴ������費ͬ�Ľ�����
 ��1�Σ�iPhone 8 Plus ������
 2-3�Σ�С�׳���Դ
 5�����ڣ�VR�۾�
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>

using namespace std;

int main()
{
    const double PRICE = 5000.0;   //�������������
    double guessPrice;             //�û��µ���Ʒ�۸�
    int guessCount = 0;            //�û��²�Ĵ���
    for(;;){
        //ÿ��һ�Σ��²������1
        guessCount ++;
        cout << "������������Ʒ�ļ۸�";
        cin >> guessPrice;
        if(guessPrice > PRICE){
            cout << "���ˣ�����" << endl;
        }else if(guessPrice < PRICE){
            cout << "С�ˣ�����" << endl;
        }else{
            cout << "��ϲ���¶��ˣ�����"  << endl;
            break;
        }
    }
    if(guessCount == 1){
        cout << "����53�²���ˣ��д��ˣ�iPhone 8 Plus ������ 256G" << endl;
    }else if(guessCount >= 2 && guessCount <= 3){
        cout << "����53�²�С���ˣ���ϲ���С�׳���Դһ̨" << endl;
    }else if(guessCount >= 4 && guessCount <= 5){
        cout << "����53�²�С���ˣ���ϲ���VR�۾�һ��" << endl;
    }else{
        cout << "ɧ��²�Ĵ���̫���ˣ��ҵû�����������ˣ���" << endl;
    }
    return 0;
}
