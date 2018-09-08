#include <iostream>

using namespace std;

int main()
{
    int num1 = 5, num2 = 2;
    double res1 = num1 / num2;
    double res2 = num1 % num2;
    //double res3 = num2 ++;
    //double res4 = -- num2;
    //double res5 = res3 - res4;
    double res6 = num2++ - --num2;
    cout << "res1 = " << res1 << endl;
    cout << "res2 = " << res2 << endl;
    //cout << "res3 = " << res3 << endl;
    //cout << "res4 = " << res4 << endl;
    //cout << "res5 = " << res5 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "res6 = " << res6 << endl;
    return 0;
}
