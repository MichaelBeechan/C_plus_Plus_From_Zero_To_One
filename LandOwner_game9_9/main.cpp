#include <iostream>
#include "LandOwner.hpp"

using namespace std;

int main()
{
    LandOwner* ptr_landOwner1 = new LandOwner();
    LandOwner* ptr_landOwner2 = new LandOwner("רҵ������");
    LandOwner* ptr_landOwner3 = new LandOwner("�ܰ�Ƥ");

    ptr_landOwner1->ShowInfo();
    cout << endl;
    ptr_landOwner2->ShowInfo();
    cout << endl;
    ptr_landOwner3->ShowInfo();

    ptr_landOwner2->TouchCard(20);

    delete ptr_landOwner1;
    delete ptr_landOwner2;
    delete ptr_landOwner3;
    return 0;
}
