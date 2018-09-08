/*******************************
 *FileName:For.cpp
 *Function:幸运53猜商品价格
 *Author:MichaelBeechan
 *Time:2018.8.26
 *Description:根据猜的次数给予不同的奖励：
 第1次：iPhone 8 Plus 土豪金
 2-3次：小米充电电源
 5次以内：VR眼镜
 *Copyright:2018-2020
 ********************************
 */
#include <iostream>

using namespace std;

int main()
{
    const double PRICE = 5000.0;   //可以是随机数字
    double guessPrice;             //用户猜的商品价格
    int guessCount = 0;            //用户猜测的次数
    for(;;){
        //每猜一次，猜测次数加1
        guessCount ++;
        cout << "请输入神秘商品的价格：";
        cin >> guessPrice;
        if(guessPrice > PRICE){
            cout << "大了！！！" << endl;
        }else if(guessPrice < PRICE){
            cout << "小了！！！" << endl;
        }else{
            cout << "恭喜，猜对了！！！"  << endl;
            break;
        }
    }
    if(guessCount == 1){
        cout << "幸运53猜测狂人，中大奖了：iPhone 8 Plus 土豪金 256G" << endl;
    }else if(guessCount >= 2 && guessCount <= 3){
        cout << "幸运53猜测小超人，恭喜获得小米充电电源一台" << endl;
    }else if(guessCount >= 4 && guessCount <= 5){
        cout << "幸运53猜测小达人，恭喜获得VR眼镜一部" << endl;
    }else{
        cout << "骚年猜测的次数太多了，我得怀疑你的智商了！！" << endl;
    }
    return 0;
}
