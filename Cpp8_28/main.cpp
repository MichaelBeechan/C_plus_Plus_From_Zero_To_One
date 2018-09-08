#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>  //控制符
//#define PI 3.1415926

using namespace std;

int main()
{
    /*cout << "英雄名称：寒冰射手·艾希" << endl;
    cout << "伤害：56\t攻击距离：600\n"
         << "护甲：15.5(+3.4)\t魔抗：30(+0.0)\n"
         << "生命值：395(+79)\t生命回复：0.9(+0.11)\n";*/
    //打印德玛西亚之力的详细信息
    SetConsoleTitle("示例：打印德玛西亚之力的详细信息");
    /**  伤害 */
    double value_attack = 57.88;
    /**  伤害成长值 */
    double value_attack_growth = 4.5;
    /**  攻击距离 */
    double value_attack_distance = 172;
    /**  护甲 */
    double value_defence = 27.54;
    double value_defence_growth = 3.0;

    cout << "名称：德玛西亚之力" << endl;
    cout << "伤害：" << value_attack << "(+" << value_attack_growth << ")\t"
         << "攻击距离：" << value_attack_distance << endl;
    cout << "护甲：" << value_defence << "(+" << value_defence_growth << ")" << endl;


    //1.强制以小数的方式显示
    cout << fixed;
    //2.控制显示的精度（包含#include<iomanip>）
    cout << setprecision(2);
    const double PI = 3.1415926;
    float radius = 4.5f;   //半径
    float height = 90.0f;   //高
    double volume = PI * pow(radius, 2) * height;
    cout << "圆柱体积为： " << volume << endl;

    return 0;
}
