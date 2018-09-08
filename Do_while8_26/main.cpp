#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 10;
    do{
        b -= a;
        a ++;
    }while(b -- < 0);
    cout << b << endl;
    return 0;
}
