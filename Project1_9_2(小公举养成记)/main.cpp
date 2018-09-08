/*******************************
 *FileName:main.cpp
 *Function:小公举养成记
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
    //变量定义
    /** 玩家账号*/
    string player_account;
    /** 密码*/
    string keyWord;
    string reKeyWord;
    /** 父亲的姓名*/
    string value_father_name;
    /** 女儿的姓名*/
    string value_daughter_name;
    /** 女儿生日的月份*/
    int value_birth_month;
    /** 女儿生日的日期*/
    int value_birth_date;
    /** 女儿的星座*/
    string value_daughter_constell;
    /** 女儿的五项基本信息：体力、智力、魅力、道德、气质*/
    //vector<int> value_daughter_baseinfos;  //动态分配内存的数组
    //int value_daughter_baseinfos[5];
    array<int, 5> value_daughter_baseinfos;
    /** 五项基本属性名*/
    array<string, 5> value_daughter_baseinfos_names = {"体力","智力","魅力","道德","气质"};
    /** 金币*/
    int value_daughter_gold = 51;
    /** 星座二维数组*/
    string constell_names[12][2] = {
        {"山羊座","水瓶座"}, //一月
        {"水瓶座","双鱼座"}, //二月
        {"双鱼座","白羊座"}, //三月
        {"白羊座","金牛座"}, //四月
        {"金牛座","双子座"}, //五月
        {"双子座","巨蟹座"}, //六月
        {"巨蟹座","狮子座"}, //七月
        {"狮子座","处女座"}, //八月
        {"处女座","天秤座"}, //九月
        {"天秤座","天蝎座"}, //十月
        {"天蝎座","射手座"}, //十一月
        {"射手座","山羊座"}  //十二月
    };
    int choice, temp1, temp2, temp3;
    /** 各月份跨星座日期*/
    int constell_dates[] {20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};

    //游戏注册开始
    cout << "创建注册您的账号，请输入您的账号名：";
    cin >> player_account;
    cout << "密码设置，请输入密码：";
    cin >> keyWord;
    cout << "请再次输入密码：";
    cin >> reKeyWord;
    if(keyWord != reKeyWord){
        cout << "您两次输入的密码不一样，请确认密码，重新登录注册" << endl;
        return 0;
    }else{
        cout << "密码设置成功！游戏正式开始" << endl;
    }
    cout << "请创建游戏角色" << endl;
    cout << "父亲的姓名：";
    cin >> value_father_name;
    cout << "女儿的姓名：";
    cin >> value_daughter_name;
    cout << "请输入你女儿生日的月份和日期：";
    cin >> value_birth_month >> value_birth_date;
    //女儿的星座计算
    value_daughter_constell = constell_names[value_birth_month-1][value_birth_date/constell_dates[value_birth_month-1]];
    cout << "女儿的信息：";
    cout << "姓名：" << value_daughter_name << endl;
    cout << "生日：1992-" << value_birth_month << "-" << value_birth_date << endl;
    cout << "星座：" << value_daughter_constell << endl;
    //体力、智力、魅力、道德、气质
    if(value_daughter_constell == "白羊座"){
        value_daughter_baseinfos[0] = 80;
        value_daughter_baseinfos[1] = 15;
        value_daughter_baseinfos[2] = 15;
        value_daughter_baseinfos[3] = 11;
        value_daughter_baseinfos[4] = 21;
    }else if(value_daughter_constell == "金牛座"){
        value_daughter_baseinfos[0] = 46;
        value_daughter_baseinfos[1] = 30;
        value_daughter_baseinfos[2] = 28;
        value_daughter_baseinfos[3] = 20;
        value_daughter_baseinfos[4] = 29;
    }else if(value_daughter_constell == "双子座"){
        value_daughter_baseinfos[0] = 50;
        value_daughter_baseinfos[1] = 35;
        value_daughter_baseinfos[2] = 23;
        value_daughter_baseinfos[3] = 8;
        value_daughter_baseinfos[4] = 20;
    }else if(value_daughter_constell == "巨蟹座"){
        value_daughter_baseinfos[0] = 40;
        value_daughter_baseinfos[1] = 31;
        value_daughter_baseinfos[2] = 33;
        value_daughter_baseinfos[3] = 17;
        value_daughter_baseinfos[4] = 33;
    }else if(value_daughter_constell == "狮子座"){
        value_daughter_baseinfos[0] = 85;
        value_daughter_baseinfos[1] = 9;
        value_daughter_baseinfos[2] = 11;
        value_daughter_baseinfos[3] = 20;
        value_daughter_baseinfos[4] = 37;
    }else if(value_daughter_constell == "处女座"){
        value_daughter_baseinfos[0] = 35;
        value_daughter_baseinfos[1] = 28;
        value_daughter_baseinfos[2] = 36;
        value_daughter_baseinfos[3] = 18;
        value_daughter_baseinfos[4] = 40;
    }else if(value_daughter_constell == "天秤座"){
        value_daughter_baseinfos[0] = 42;
        value_daughter_baseinfos[1] = 33;
        value_daughter_baseinfos[2] = 25;
        value_daughter_baseinfos[3] = 32;
        value_daughter_baseinfos[4] = 28;
    }else if(value_daughter_constell == "射手座"){
        value_daughter_baseinfos[0] = 57;
        value_daughter_baseinfos[1] = 31;
        value_daughter_baseinfos[2] = 15;
        value_daughter_baseinfos[3] = 19;
        value_daughter_baseinfos[4] = 20;
    }else if(value_daughter_constell == "天蝎座"){
        value_daughter_baseinfos[0] = 50;
        value_daughter_baseinfos[1] = 25;
        value_daughter_baseinfos[2] = 40;
        value_daughter_baseinfos[3] = 18;
        value_daughter_baseinfos[4] = 17;
    }else if(value_daughter_constell == "山羊座"){
        value_daughter_baseinfos[0] = 56;
        value_daughter_baseinfos[1] = 21;
        value_daughter_baseinfos[2] = 16;
        value_daughter_baseinfos[3] = 25;
        value_daughter_baseinfos[4] = 23;
    }else if(value_daughter_constell == "水瓶座"){
        value_daughter_baseinfos[0] = 43;
        value_daughter_baseinfos[1] = 43;
        value_daughter_baseinfos[2] = 20;
        value_daughter_baseinfos[3] = 23;
        value_daughter_baseinfos[4] = 17;
    }else if(value_daughter_constell == "天蝎座"){
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
    //1、为父女取名字
    //2、为女儿录入初始信息生日，星座
    //根据女儿的星座，设置游戏的基本参数（体力，智力，魅力，道德，气质）
    //3、开始游戏大循环
    cout << "游戏从1992年5月开始" << endl;
    for(int year = 1992; year <= 1992 + 7; year ++){
        for(int month = (year == 1992) ? 5 : 1; month <= 12; month ++){
            //判断本月是不是女的生日
            if(month == value_birth_month){
                cout << "本月是" << value_daughter_name << "的生日，要不要送礼物呢？" << endl;
                //根据用户的输入进行盘判断

            }
            //显示游戏主菜单
            cout << "\n1、查看状态\n2、安排行程\n3、亲自谈话\n4、存档\n5、读档" << endl;
            cin >> choice;
            switch(choice){
                case 1: //查看状态
                    cout << "女儿的信息：" << endl;
                    cout << "姓名：" << value_daughter_name << endl;
                    cout << "生日：1992-" << value_birth_month << "-" << value_birth_date << endl;
                    cout << "星座：" << value_daughter_constell << endl;
                    cout << "金币：" << value_daughter_gold << endl;
                    //打印核心属性
                    cout << left;
                    for(int i = 0; i < 5; i ++){
                        cout << value_daughter_baseinfos_names[i] << ": " << setw(3) << value_daughter_baseinfos[i];
                        //计算实心方框的数量
                        int solidCount = value_daughter_baseinfos[i] / 10;
                        for(int j = 0; j < 10; j ++){
                            if(j < solidCount)
                                cout << "■";
                            else
                                cout << "□";
                        }
                        cout << endl;
                    }
                    break;
                case 2:{//安排行程 一个月最多安排三个行程
                    string month_parts[] = {"上旬", "中旬", "下旬"};
                    for(int i = 0; i < 3; i ++)
                    {
                        cout << "--" << month << "月 --" << month_parts[i] << endl;
                        cout << "1、学习武艺\n2、上私塾\n3、学习礼法\n4、出城修行\n5、打工赚钱" << endl;
                        cout << "请选择：";
                        cin >> choice;

                        //需要判断没钱的情况：强制打工
                        srand(time(nullptr));
                        if(choice == 1){//+体力 + 魅力 -金钱
                            if(value_daughter_gold <= 50){
                                cout << "您当前的金钱不足，您的去打工赚钱了！！！" << endl;
                                continue;
                            }
                            value_daughter_baseinfos[0] += temp1 = rand() % 11;
                            value_daughter_baseinfos[2] += temp2 = rand() % 11;
                            value_daughter_gold -= temp3 = rand() % 51;
                            cout << "学习张三丰的好榜样！！！" << endl;
                            cout << "体力+" << temp1 << "，魅力+" << temp2 << "，金钱-" << temp3 << endl;
                        }else if(choice == 5){//-体力 +金钱
                            value_daughter_baseinfos[0] -= temp1 = rand() % 11;
                            value_daughter_gold += temp3 = rand() % 101;
                            cout << "打工很累的，-" << temp1 << "的体力" << endl;
                            cout << "通过努力打工赚钱，赚到了" << temp3 << "个金币！！" << endl;
                        }else if(choice == 2){//+智力 +魅力 -金钱
                            if(value_daughter_gold <= 50){
                                cout << "您当前的金钱不足，您的去打工赚钱了！！！" << endl;
                                continue;
                            }
                            value_daughter_baseinfos[1] += temp1 = rand() % 11;
                            value_daughter_baseinfos[2] += temp2 = rand() % 11;
                            value_daughter_gold -= temp3 =rand() %51;
                            cout << "接受了鲁迅《呐喊》《彷徨》的洗礼！！！" << endl;
                            cout << "智力+" << temp1 << "，魅力+" << temp2 << "，金钱-" << temp3 << endl;
                        }else if(choice == 3){//+道德 + 气质 -金钱
                            if(value_daughter_gold <= 50){
                                cout << "您当前的金钱不足，您的去打工赚钱了！！！" << endl;
                                continue;
                            }
                            value_daughter_baseinfos[3] += temp1 = rand() % 11;
                            value_daughter_baseinfos[4] += temp2 = rand() % 11;
                            value_daughter_gold -= temp3 = rand() % 51;
                            cout << "今天去找了京町和尚学习了礼法，感觉气质一下子就上来了！！！" << endl;
                            cout << "道德+" << temp1 << "，气质+" << temp2 << "，金钱-" << temp3 << endl;
                        }else if(choice == 4){
                            if(value_daughter_gold <= 50){
                                cout << "您当前的金钱不足，您的去打工赚钱了！！！" << endl;
                                continue;
                            }
                            cout << "功能不全，撤退" << endl;
                            cout << "去打打工吧" << endl;
                        }
                    }

                    break;
                }
                case 3://亲自谈话
                    cout << "技能不全，撤退" << endl;
                    break;
                case 4://存档
                    cout << "技能不全，撤退" << endl;
                    break;
                case 5://读档
                    cout << "技能不全，撤退" << endl;
                    break;
                default:
                    cout << "技能不全，撤退" << endl;
                    break;
            }
        }

    }

    //4、根据各项参数，判定游戏结果
    int sum = 0;
    for(int i = 0; i < 5; i ++){
        sum += value_daughter_baseinfos[i];
    }
    if(sum >= 2000){
        cout << "最终游戏结果：您的女儿登基为女王陛下" << endl;
    }else if(sum >= 1800 && sum < 2000){
        cout << "最终游戏结果：您的女儿登基为王妃" << endl;
    }else if(sum >= 1600 && sum < 1800){
        cout << "最终游戏结果：您的女儿成为女将军" << endl;
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
        if("智力" == value_daughter_baseinfos_names[maxIndex] && value_daughter_baseinfos[0] > value_daughter_baseinfos[1]){
            cout << "经过长期的训练，" << value_daughter_name << "成长成为一名光荣的皇家学院总裁！" << endl;
        }
    }


    return 0;
}
