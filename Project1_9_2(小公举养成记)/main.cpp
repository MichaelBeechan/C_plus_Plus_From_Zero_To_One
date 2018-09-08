/*******************************
 *FileName:main.cpp
 *Function:С�������ɼ�
 *Author:MichaelBeechan
 *Time:2018.9.2
 *Description:
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>
#include <iomanip>
#include <ctime>
#include <vector>
#include <array>
#include <math.h>
#include <cstdlib>

using namespace std;

int main()
{
    //��������
    /** ����˺�*/
    string player_account;
    /** ����*/
    string keyWord;
    string reKeyWord;
    /** ���׵�����*/
    string value_father_name;
    /** Ů��������*/
    string value_daughter_name;
    /** Ů�����յ��·�*/
    int value_birth_month;
    /** Ů�����յ�����*/
    int value_birth_date;
    /** Ů��������*/
    string value_daughter_constell;
    /** Ů�������������Ϣ�����������������������¡�����*/
    //vector<int> value_daughter_baseinfos;  //��̬�����ڴ������
    //int value_daughter_baseinfos[5];
    array<int, 5> value_daughter_baseinfos;
    /** �������������*/
    array<string, 5> value_daughter_baseinfos_names = {"����","����","����","����","����"};
    /** ���*/
    int value_daughter_gold = 51;
    /** ������ά����*/
    string constell_names[12][2] = {
        {"ɽ����","ˮƿ��"}, //һ��
        {"ˮƿ��","˫����"}, //����
        {"˫����","������"}, //����
        {"������","��ţ��"}, //����
        {"��ţ��","˫����"}, //����
        {"˫����","��з��"}, //����
        {"��з��","ʨ����"}, //����
        {"ʨ����","��Ů��"}, //����
        {"��Ů��","�����"}, //����
        {"�����","��Ы��"}, //ʮ��
        {"��Ы��","������"}, //ʮһ��
        {"������","ɽ����"}  //ʮ����
    };
    int choice, temp1, temp2, temp3;
    /** ���·ݿ���������*/
    int constell_dates[] {20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};

    //��Ϸע�Ὺʼ
    cout << "����ע�������˺ţ������������˺�����";
    cin >> player_account;
    cout << "�������ã����������룺";
    cin >> keyWord;
    cout << "���ٴ��������룺";
    cin >> reKeyWord;
    if(keyWord != reKeyWord){
        cout << "��������������벻һ������ȷ�����룬���µ�¼ע��" << endl;
        return 0;
    }else{
        cout << "�������óɹ�����Ϸ��ʽ��ʼ" << endl;
    }
    cout << "�봴����Ϸ��ɫ" << endl;
    cout << "���׵�������";
    cin >> value_father_name;
    cout << "Ů����������";
    cin >> value_daughter_name;
    cout << "��������Ů�����յ��·ݺ����ڣ�";
    cin >> value_birth_month >> value_birth_date;
    //Ů������������
    value_daughter_constell = constell_names[value_birth_month-1][value_birth_date/constell_dates[value_birth_month-1]];
    cout << "Ů������Ϣ��";
    cout << "������" << value_daughter_name << endl;
    cout << "���գ�1992-" << value_birth_month << "-" << value_birth_date << endl;
    cout << "������" << value_daughter_constell << endl;
    //���������������������¡�����
    if(value_daughter_constell == "������"){
        value_daughter_baseinfos[0] = 80;
        value_daughter_baseinfos[1] = 15;
        value_daughter_baseinfos[2] = 15;
        value_daughter_baseinfos[3] = 11;
        value_daughter_baseinfos[4] = 21;
    }else if(value_daughter_constell == "��ţ��"){
        value_daughter_baseinfos[0] = 46;
        value_daughter_baseinfos[1] = 30;
        value_daughter_baseinfos[2] = 28;
        value_daughter_baseinfos[3] = 20;
        value_daughter_baseinfos[4] = 29;
    }else if(value_daughter_constell == "˫����"){
        value_daughter_baseinfos[0] = 50;
        value_daughter_baseinfos[1] = 35;
        value_daughter_baseinfos[2] = 23;
        value_daughter_baseinfos[3] = 8;
        value_daughter_baseinfos[4] = 20;
    }else if(value_daughter_constell == "��з��"){
        value_daughter_baseinfos[0] = 40;
        value_daughter_baseinfos[1] = 31;
        value_daughter_baseinfos[2] = 33;
        value_daughter_baseinfos[3] = 17;
        value_daughter_baseinfos[4] = 33;
    }else if(value_daughter_constell == "ʨ����"){
        value_daughter_baseinfos[0] = 85;
        value_daughter_baseinfos[1] = 9;
        value_daughter_baseinfos[2] = 11;
        value_daughter_baseinfos[3] = 20;
        value_daughter_baseinfos[4] = 37;
    }else if(value_daughter_constell == "��Ů��"){
        value_daughter_baseinfos[0] = 35;
        value_daughter_baseinfos[1] = 28;
        value_daughter_baseinfos[2] = 36;
        value_daughter_baseinfos[3] = 18;
        value_daughter_baseinfos[4] = 40;
    }else if(value_daughter_constell == "�����"){
        value_daughter_baseinfos[0] = 42;
        value_daughter_baseinfos[1] = 33;
        value_daughter_baseinfos[2] = 25;
        value_daughter_baseinfos[3] = 32;
        value_daughter_baseinfos[4] = 28;
    }else if(value_daughter_constell == "������"){
        value_daughter_baseinfos[0] = 57;
        value_daughter_baseinfos[1] = 31;
        value_daughter_baseinfos[2] = 15;
        value_daughter_baseinfos[3] = 19;
        value_daughter_baseinfos[4] = 20;
    }else if(value_daughter_constell == "��Ы��"){
        value_daughter_baseinfos[0] = 50;
        value_daughter_baseinfos[1] = 25;
        value_daughter_baseinfos[2] = 40;
        value_daughter_baseinfos[3] = 18;
        value_daughter_baseinfos[4] = 17;
    }else if(value_daughter_constell == "ɽ����"){
        value_daughter_baseinfos[0] = 56;
        value_daughter_baseinfos[1] = 21;
        value_daughter_baseinfos[2] = 16;
        value_daughter_baseinfos[3] = 25;
        value_daughter_baseinfos[4] = 23;
    }else if(value_daughter_constell == "ˮƿ��"){
        value_daughter_baseinfos[0] = 43;
        value_daughter_baseinfos[1] = 43;
        value_daughter_baseinfos[2] = 20;
        value_daughter_baseinfos[3] = 23;
        value_daughter_baseinfos[4] = 17;
    }else if(value_daughter_constell == "��Ы��"){
        value_daughter_baseinfos[0] = 41;
        value_daughter_baseinfos[1] = 20;
        value_daughter_baseinfos[2] = 29;
        value_daughter_baseinfos[3] = 23;
        value_daughter_baseinfos[4] = 32;
    }
    for(int i = 0; i < 5; i ++)
    {
        cout << value_daughter_baseinfos[i] << '\t';
    }
    cout << endl;
    //1��Ϊ��Ůȡ����
    //2��ΪŮ��¼���ʼ��Ϣ���գ�����
    //����Ů����������������Ϸ�Ļ������������������������������£����ʣ�
    //3����ʼ��Ϸ��ѭ��
    cout << "��Ϸ��1992��5�¿�ʼ" << endl;
    for(int year = 1992; year <= 1992 + 7; year ++){
        for(int month = (year == 1992) ? 5 : 1; month <= 12; month ++){
            //�жϱ����ǲ���Ů������
            if(month == value_birth_month){
                cout << "������" << value_daughter_name << "�����գ�Ҫ��Ҫ�������أ�" << endl;
                //�����û�������������ж�

            }
            //��ʾ��Ϸ���˵�
            cout << "\n1���鿴״̬\n2�������г�\n3������̸��\n4���浵\n5������" << endl;
            cin >> choice;
            switch(choice){
                case 1: //�鿴״̬
                    cout << "Ů������Ϣ��" << endl;
                    cout << "������" << value_daughter_name << endl;
                    cout << "���գ�1992-" << value_birth_month << "-" << value_birth_date << endl;
                    cout << "������" << value_daughter_constell << endl;
                    cout << "��ң�" << value_daughter_gold << endl;
                    //��ӡ��������
                    cout << left;
                    for(int i = 0; i < 5; i ++){
                        cout << value_daughter_baseinfos_names[i] << ": " << setw(3) << value_daughter_baseinfos[i];
                        //����ʵ�ķ��������
                        int solidCount = value_daughter_baseinfos[i] / 10;
                        for(int j = 0; j < 10; j ++){
                            if(j < solidCount)
                                cout << "��";
                            else
                                cout << "��";
                        }
                        cout << endl;
                    }
                    break;
                case 2:{//�����г� һ������ల�������г�
                    string month_parts[] = {"��Ѯ", "��Ѯ", "��Ѯ"};
                    for(int i = 0; i < 3; i ++)
                    {
                        cout << "--" << month << "�� --" << month_parts[i] << endl;
                        cout << "1��ѧϰ����\n2����˽��\n3��ѧϰ��\n4����������\n5����׬Ǯ" << endl;
                        cout << "��ѡ��";
                        cin >> choice;

                        //��Ҫ�ж�ûǮ�������ǿ�ƴ�
                        srand(time(nullptr));
                        if(choice == 1){//+���� + ���� -��Ǯ
                            if(value_daughter_gold <= 50){
                                cout << "����ǰ�Ľ�Ǯ���㣬����ȥ��׬Ǯ�ˣ�����" << endl;
                                continue;
                            }
                            value_daughter_baseinfos[0] += temp1 = rand() % 11;
                            value_daughter_baseinfos[2] += temp2 = rand() % 11;
                            value_daughter_gold -= temp3 = rand() % 51;
                            cout << "ѧϰ������ĺð���������" << endl;
                            cout << "����+" << temp1 << "������+" << temp2 << "����Ǯ-" << temp3 << endl;
                        }else if(choice == 5){//-���� +��Ǯ
                            value_daughter_baseinfos[0] -= temp1 = rand() % 11;
                            value_daughter_gold += temp3 = rand() % 101;
                            cout << "�򹤺��۵ģ�-" << temp1 << "������" << endl;
                            cout << "ͨ��Ŭ����׬Ǯ��׬����" << temp3 << "����ң���" << endl;
                        }else if(choice == 2){//+���� +���� -��Ǯ
                            if(value_daughter_gold <= 50){
                                cout << "����ǰ�Ľ�Ǯ���㣬����ȥ��׬Ǯ�ˣ�����" << endl;
                                continue;
                            }
                            value_daughter_baseinfos[1] += temp1 = rand() % 11;
                            value_daughter_baseinfos[2] += temp2 = rand() % 11;
                            value_daughter_gold -= temp3 =rand() %51;
                            cout << "������³Ѹ���ź��������塷��ϴ�񣡣���" << endl;
                            cout << "����+" << temp1 << "������+" << temp2 << "����Ǯ-" << temp3 << endl;
                        }else if(choice == 3){//+���� + ���� -��Ǯ
                            if(value_daughter_gold <= 50){
                                cout << "����ǰ�Ľ�Ǯ���㣬����ȥ��׬Ǯ�ˣ�����" << endl;
                                continue;
                            }
                            value_daughter_baseinfos[3] += temp1 = rand() % 11;
                            value_daughter_baseinfos[4] += temp2 = rand() % 11;
                            value_daughter_gold -= temp3 = rand() % 51;
                            cout << "����ȥ���˾����ѧϰ���񷨣��о�����һ���Ӿ������ˣ�����" << endl;
                            cout << "����+" << temp1 << "������+" << temp2 << "����Ǯ-" << temp3 << endl;
                        }else if(choice == 4){
                            if(value_daughter_gold <= 50){
                                cout << "����ǰ�Ľ�Ǯ���㣬����ȥ��׬Ǯ�ˣ�����" << endl;
                                continue;
                            }
                            cout << "���ܲ�ȫ������" << endl;
                            cout << "ȥ��򹤰�" << endl;
                        }
                    }

                    break;
                }
                case 3://����̸��
                    cout << "���ܲ�ȫ������" << endl;
                    break;
                case 4://�浵
                    cout << "���ܲ�ȫ������" << endl;
                    break;
                case 5://����
                    cout << "���ܲ�ȫ������" << endl;
                    break;
                default:
                    cout << "���ܲ�ȫ������" << endl;
                    break;
            }
        }

    }

    //4�����ݸ���������ж���Ϸ���
    int sum = 0;
    for(int i = 0; i < 5; i ++){
        sum += value_daughter_baseinfos[i];
    }
    if(sum >= 2000){
        cout << "������Ϸ���������Ů���ǻ�ΪŮ������" << endl;
    }else if(sum >= 1800 && sum < 2000){
        cout << "������Ϸ���������Ů���ǻ�Ϊ����" << endl;
    }else if(sum >= 1600 && sum < 1800){
        cout << "������Ϸ���������Ů����ΪŮ����" << endl;
    }else if(sum >= 1200 && sum < 1600){
        int maxValue = value_daughter_baseinfos[0];
        int maxIndex = 0;
        for(int i = 1; i < 5; i ++)
        {
            if(maxValue < value_daughter_baseinfos[i]){
                maxValue = value_daughter_baseinfos[i];
                maxIndex = i;
            }
        }
        if("����" == value_daughter_baseinfos_names[maxIndex] && value_daughter_baseinfos[0] > value_daughter_baseinfos[1]){
            cout << "�������ڵ�ѵ����" << value_daughter_name << "�ɳ���Ϊһ�����ٵĻʼ�ѧԺ�ܲã�" << endl;
        }
    }


    return 0;
}
