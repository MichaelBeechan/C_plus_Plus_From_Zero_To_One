#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int num;
    int gender;
    int survival;
    int born;
    int skill;
    int lookface;
    int money;
    cout << "������Ͷ̥ϵͳ��������������" << endl;
    Sleep(1000);
    cout << "����������ϵͳ����ȴ�(ϵͳ����������)������" << endl;
    Sleep(1000);
    cout << "#####10%" << endl;
    Sleep(1000);
    cout << "##########20%" << endl;
    Sleep(1000);
    cout << "###################60%" << endl;
    Sleep(1000);
    cout << "############################100%" << endl;
    Sleep(1000);
    cout << "������ϵͳ������ɣ������С�������������" << endl;
    Sleep(1000);
    cout << "             ��Ϸ��ʼ         " << endl;
    Sleep(1000);
    cout << "             ��ѡ��         " << endl;
    cout << endl;
    Sleep(0.5*1000);
    cout << endl;
    cout << "1����ҪͶ̥" << "              " << "2���˳�" << endl;
    cout << endl;
    cout << "��������ѡ������֣�������" << endl;
    cout << endl;
    Sleep(0.5*1000);
    cout << "�����������:";
    cin >> num;
    if(num == 1)
    {
        Sleep(1000);
        cout << "�������������Ա𣡣�����" << endl;
        cout << endl;
        Sleep(0.5*1000);
        cout << "1:��(���)" << "             " << "2:Ů(50���)" << endl;
        cout << endl;
        cout << "��������ѡ������֣�������" << endl;
        cout << "����ѡ��1" << endl;
        cout << "�����������: ";
        cin >> gender;
        if(gender == 1)
        {
            Sleep(1000);
            cout << endl;
            cout << "��ѡ����������Ѷ�" << endl;
            Sleep(0.5*1000);
            cout << "1:��(10w���)   " << "2:�е�(5000���)    " << "3:����(1000���)    " << "4:��Ԩ(���)  "<< endl;
            cout << endl;
            Sleep(0.5*1000);
            cout << "��������ѡ������֣�������" << endl;
            cout << endl;
            Sleep(0.5*1000);
            cout << "����ѡ��4" << endl;
            cout << "�����������: ";
            cin >> survival;
            switch(survival)
            {
                case 1:
                    cout << "����Ʋ��Ǵ��Ŷ����������" << endl;
                    cout << endl;
                    cout << "��������ѡ���" << endl;
                    break;
                case 2:
                    cout << "����������ô��Ǯ�𣿣�����" << endl;
                    cout << endl;
                    cout << "��������ѡ���" << endl;
                    break;
                case 3:
                    cout << "�Բ���������㣬��ѡ��4 �ٺ٣�����" << endl;
                    cout << endl;
                    cout << "��������ѡ���" << endl;
                    break;
                default:
                    cout << endl;
                    cout << "��������������" << endl;
                    cout << endl;
                    Sleep(1000);
                    cout << "��ѡ����ĳ���" << endl;
                    cout << endl;
                    Sleep(0.5*1000);
                    cout << "1:�Ұ��������װ(10w���)   "
                         << "2:������(5w���)    "
                         << "3:�ٶ���(5w���)    "
                         << "4:������(5w���)    "
                         << "5:���(���)        " << endl;
                    cout << endl;
                    Sleep(0.5*1000);
                    cout << "��������ѡ������֣�������" << endl;
                    cout << endl;
                    Sleep(0.5*1000);
                    cout << "����ѡ��5" << endl;
                    cout << "�����������: ";
                    cin >> born;
                    switch(born)
                    {
                        case 1:
                            cout << "��ֲ�����հɣ���������" << endl;
                            cout << endl;
                            cout << "��������ѡ���" << endl;
                            break;
                        case 2:
                            cout << "���㻹�Ǹ�����" << endl;
                            cout << endl;
                            cout << "��������ѡ���" << endl;
                            break;
                        case 3:
                            cout << "�ٶ���ѽ������ �ٺ٣�����" << endl;
                            cout << endl;
                            cout << "��������ѡ���" << endl;
                            break;
                        case 4:
                            cout << "������������ �ٺ٣�����" << endl;
                            cout << endl;
                            cout << "��������ѡ���" << endl;
                            break;
                        default:
                            cout << "ԭ�������һö����������������" << endl;
                            cout << endl;
                            Sleep(1000);
                            cout << "���м�������ѡ��" << endl;
                            cout << endl;
                            cout << "1:׬Ǯ(1w���)   "
                                 << "2:����(1w���)    "
                                 << "3:����(1w���)    "
                                 << "4:����(1w���)    "
                                 << "5:ë������(���)        " << endl;
                            cout << "����ѡ��5" << endl;
                            cout << "���ѡ���ǣ�" << endl;
                            cin >> skill;
                            switch(skill)
                            {
                                case 1:
                                    cout << "Ҫ�����𣡣���" << endl;
                                    cout << endl;
                                    cout << "��������ѡ���" << endl;
                                    break;
                                case 2:
                                    cout << "Ҫ�����𣡣���" << endl;
                                    cout << endl;
                                    cout << "��������ѡ���" << endl;
                                    break;
                                case 3:
                                    cout << "Ҫ�����𣡣��� �ٺ٣�����" << endl;
                                    cout << endl;
                                    cout << "��������ѡ���" << endl;
                                    break;
                                case 4:
                                    cout << "Ҫ�����𣡣��� �ٺ٣�����" << endl;
                                    cout << endl;
                                    cout << "��������ѡ���" << endl;
                                    break;
                                default:
                                    cout << "���ܶ�����������������" << endl;
                                    cout << endl;
                                    Sleep(1000);
                                    cout << "��ĳ�����ô������ѡ��" << endl;
                                    cout << endl;
                                    cout << "����ѡ��3" << endl;
                                    cout << "1:˧��һö(1w���)   "
                                         << "2:˧��һö(1w���)    "
                                         << "3:���(���)        " << endl;
                                    cout << "���ѡ���ǣ�" << endl;
                                    cin >> lookface;
                                    if(lookface == 3)
                                    {
                                        cout << "��ϲ�㣡����������������" << endl;
                                        cout << "������ҩ�ɾ�" << endl;
                                    }
                                    else
                                    {
                                        cout << "��ʵһ���" << endl;
                                        return 0;
                                    }
                            }
                    }
            }
        }
        else
        {
            cout << "what????������Ϊ��....." << endl;
            cout << "�����ѡ�� 1:����Ҫ��ֵ      2:ûǮ��ֵ" << endl;
            cout << "Input your choose number : ";
            cin >> money;
            if(money == 1)
            {
                cout << "���һö��Ҫ��ֵ������" << endl;
                cout << "���һö��Ҫ��ֵ������" << endl;
            }
            else
            {
                cout << "��������֪֮����������" << endl;
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }

    return 0;
}
