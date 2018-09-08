/*******************************
 *FileName:main.cpp
 *Function:使用函数实现游戏中的私聊
 *Author:MichaelBeechan
 *Time:2018.9.8
 *Description:
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>
#include <cstring>

using namespace std;

//模拟游戏中私聊的函数
string chatTo(const string&, const string&);
string chatFrom(const string&, const string&);

int main()
{
    cout << "请输入对方的名称：";
    string toName;
    getline(cin, toName);
    cout << "请输入发送给对方的聊天信息：";
    string content;
    getline(cin, content);
    string chatMsg1 = chatTo(toName, content);
    cout << "请输入你的的名称：";
    getline(cin, toName);
    cout << "请输入对方给你的聊天信息：";
    getline(cin, content);
    string chatMsg2 = chatFrom(toName, content);
    cout << chatMsg1 << endl;
    cout << chatMsg2 << endl;
    return 0;
}
/** 跟某人聊天   负责字符串的拼接
 ** @param toName   聊天的对象名称
 ** @param content  聊天的内容
 ** @return         按某规定格式拼接聊天信息后的字符串
 */
string chatTo(const string& toName, const string& content)
{
    string msg = "【♂】你悄悄的对【" + toName + "】说：" + content;
    return msg;
}
string chatFrom(const string& fromName, const string& content)
{
    string msg = "【♀】【" + fromName + "】悄悄的对你说：" + content;
    return msg;
}
