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
    cout << "！！！投胎系统正在启动！！！" << endl;
    Sleep(1000);
    cout << "！！！加载系统中请等待(系统加载免流量)！！！" << endl;
    Sleep(1000);
    cout << "#####10%" << endl;
    Sleep(1000);
    cout << "##########20%" << endl;
    Sleep(1000);
    cout << "###################60%" << endl;
    Sleep(1000);
    cout << "############################100%" << endl;
    Sleep(1000);
    cout << "！！！系统加载完成，启动中。。。。！！！" << endl;
    Sleep(1000);
    cout << "             游戏开始         " << endl;
    Sleep(1000);
    cout << "             请选择         " << endl;
    cout << endl;
    Sleep(0.5*1000);
    cout << endl;
    cout << "1、我要投胎" << "              " << "2、退出" << endl;
    cout << endl;
    cout << "请输入你选择的数字！！！！" << endl;
    cout << endl;
    Sleep(0.5*1000);
    cout << "输入的数字是:";
    cin >> num;
    if(num == 1)
    {
        Sleep(1000);
        cout << "请继续输入你的性别！！！！" << endl;
        cout << endl;
        Sleep(0.5*1000);
        cout << "1:男(免费)" << "             " << "2:女(50金币)" << endl;
        cout << endl;
        cout << "请输入你选择的数字！！！！" << endl;
        cout << "建议选择1" << endl;
        cout << "输入的数字是: ";
        cin >> gender;
        if(gender == 1)
        {
            Sleep(1000);
            cout << endl;
            cout << "请选择你的生存难度" << endl;
            Sleep(0.5*1000);
            cout << "1:简单(10w金币)   " << "2:中等(5000金币)    " << "3:困难(1000金币)    " << "4:深渊(免费)  "<< endl;
            cout << endl;
            Sleep(0.5*1000);
            cout << "请输入你选择的数字！！！！" << endl;
            cout << endl;
            Sleep(0.5*1000);
            cout << "建议选择4" << endl;
            cout << "输入的数字是: ";
            cin >> survival;
            switch(survival)
            {
                case 1:
                    cout << "你好似不是大款哦！！！！！" << endl;
                    cout << endl;
                    cout << "还是重新选择吧" << endl;
                    break;
                case 2:
                    cout << "敢问你有这么多钱吗？？？？" << endl;
                    cout << endl;
                    cout << "还是重新选择吧" << endl;
                    break;
                case 3:
                    cout << "对不起你的余额不足，请选择4 嘿嘿！！！" << endl;
                    cout << endl;
                    cout << "还是重新选择吧" << endl;
                    break;
                default:
                    cout << endl;
                    cout << "！！哈哈哈！！" << endl;
                    cout << endl;
                    Sleep(1000);
                    cout << "请选择你的出身" << endl;
                    cout << endl;
                    Sleep(0.5*1000);
                    cout << "1:我爸是李刚套装(10w金币)   "
                         << "2:富二代(5w金币)    "
                         << "3:官二代(5w金币)    "
                         << "4:军二代(5w金币)    "
                         << "5:穷逼(免费)        " << endl;
                    cout << endl;
                    Sleep(0.5*1000);
                    cout << "请输入你选择的数字！！！！" << endl;
                    cout << endl;
                    Sleep(0.5*1000);
                    cout << "建议选择5" << endl;
                    cout << "输入的数字是: ";
                    cin >> born;
                    switch(born)
                    {
                        case 1:
                            cout << "你爸不是李刚吧！！！！！" << endl;
                            cout << endl;
                            cout << "还是重新选择吧" << endl;
                            break;
                        case 2:
                            cout << "就你还是富二代" << endl;
                            cout << endl;
                            cout << "还是重新选择吧" << endl;
                            break;
                        case 3:
                            cout << "官二代呀。。。 嘿嘿！！！" << endl;
                            cout << endl;
                            cout << "还是重新选择吧" << endl;
                            break;
                        case 4:
                            cout << "军二代？？？ 嘿嘿！！！" << endl;
                            cout << endl;
                            cout << "还是重新选择吧" << endl;
                            break;
                        default:
                            cout << "原来是穷逼一枚啊！！哈哈哈！！" << endl;
                            cout << endl;
                            Sleep(1000);
                            cout << "你有技能吗？请选择" << endl;
                            cout << endl;
                            cout << "1:赚钱(1w金币)   "
                                 << "2:把妹(1w金币)    "
                                 << "3:文艺(1w金币)    "
                                 << "4:技工(1w金币)    "
                                 << "5:毛都不会(免费)        " << endl;
                            cout << "建议选择5" << endl;
                            cout << "你的选择是：" << endl;
                            cin >> skill;
                            switch(skill)
                            {
                                case 1:
                                    cout << "要逼脸吗！！！" << endl;
                                    cout << endl;
                                    cout << "还是重新选择吧" << endl;
                                    break;
                                case 2:
                                    cout << "要逼脸吗！！！" << endl;
                                    cout << endl;
                                    cout << "还是重新选择吧" << endl;
                                    break;
                                case 3:
                                    cout << "要逼脸吗！！！ 嘿嘿！！！" << endl;
                                    cout << endl;
                                    cout << "还是重新选择吧" << endl;
                                    break;
                                case 4:
                                    cout << "要逼脸吗！！！ 嘿嘿！！！" << endl;
                                    cout << endl;
                                    cout << "还是重新选择吧" << endl;
                                    break;
                                default:
                                    cout << "无能儿啊！！哈哈哈！！" << endl;
                                    cout << endl;
                                    Sleep(1000);
                                    cout << "你的长相怎么样？请选择" << endl;
                                    cout << endl;
                                    cout << "建议选择3" << endl;
                                    cout << "1:帅哥一枚(1w金币)   "
                                         << "2:帅锅一枚(1w金币)    "
                                         << "3:随机(免费)        " << endl;
                                    cout << "你的选择是：" << endl;
                                    cin >> lookface;
                                    if(lookface == 3)
                                    {
                                        cout << "恭喜你！！！你是懒癌患者" << endl;
                                        cout << "你已无药可救" << endl;
                                    }
                                    else
                                    {
                                        cout << "诚实一点吧" << endl;
                                        return 0;
                                    }
                            }
                    }
            }
        }
        else
        {
            cout << "what????你的余额为零....." << endl;
            cout << "你可以选择： 1:老子要充值      2:没钱充值" << endl;
            cout << "Input your choose number : ";
            cin >> money;
            if(money == 1)
            {
                cout << "穷逼一枚还要充值啊！！" << endl;
                cout << "穷逼一枚还要充值啊！！" << endl;
            }
            else
            {
                cout << "还是有自知之明啊！！！" << endl;
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
