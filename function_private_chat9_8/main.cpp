/*******************************
 *FileName:main.cpp
 *Function:ʹ�ú���ʵ����Ϸ�е�˽��
 *Author:MichaelBeechan
 *Time:2018.9.8
 *Description:
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>
#include <cstring>

using namespace std;

//ģ����Ϸ��˽�ĵĺ���
string chatTo(const string&, const string&);
string chatFrom(const string&, const string&);

int main()
{
    cout << "������Է������ƣ�";
    string toName;
    getline(cin, toName);
    cout << "�����뷢�͸��Է���������Ϣ��";
    string content;
    getline(cin, content);
    string chatMsg1 = chatTo(toName, content);
    cout << "��������ĵ����ƣ�";
    getline(cin, toName);
    cout << "������Է������������Ϣ��";
    getline(cin, content);
    string chatMsg2 = chatFrom(toName, content);
    cout << chatMsg1 << endl;
    cout << chatMsg2 << endl;
    return 0;
}
/** ��ĳ������   �����ַ�����ƴ��
 ** @param toName   ����Ķ�������
 ** @param content  ���������
 ** @return         ��ĳ�涨��ʽƴ��������Ϣ����ַ���
 */
string chatTo(const string& toName, const string& content)
{
    string msg = "���᡿�����ĵĶԡ�" + toName + "��˵��" + content;
    return msg;
}
string chatFrom(const string& fromName, const string& content)
{
    string msg = "���⡿��" + fromName + "�����ĵĶ���˵��" + content;
    return msg;
}
