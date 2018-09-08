#include <iostream>

using namespace std;
#define INT_MIN -1
int main()
{
    double power[99];  //数组大小一旦确定，就不能修改了
    int powerCount = 0; // 当前数组中的元素个数
    double insertPower; //要插入的数字
    int insertIndex = 0;  //默认插入第一个元素，插入数字的下标
    power[powerCount ++] = 45771;
    power[powerCount ++] = 42322;
    power[powerCount ++] = 40907;
    power[powerCount ++] = 40706;

    //冒泡
    double temp;
    for(int i = 0; i < powerCount; i ++)
    {
        for(int j = 0; j < powerCount - i - 1; j ++)
        {
            if(power[j] < power[j + 1]){
                temp = power[j];
                power[j] = power[j + 1];
                power[j + 1] = temp;
            }
        }
    }
    cout << "排序后：" << endl;
    for(int i = 0; i < powerCount; i ++){
        cout << power[i] << "\t";
    }
    cout << endl;
    //插入
    cout << "请输入要插入的数字：";
    cin >> insertPower;

    insertIndex = powerCount;
    /** 1 找到第一个比插入元素大的位置insertIndex*/
    for(int i = 0; i < powerCount; i ++)
    {
        if(insertPower > power[i]){
            insertIndex = i;
            break;
        }
    }
    /** 2 从最后一个元素开始，将数字复制到最后一个元素中*/
    for(int i = powerCount - 1; i >= insertIndex; i --){
        power[i + 1] = power[i];
    }
    /** 将要插入的数字复制给下标insertIndex的元素*/
    power[insertIndex] = insertPower;
    /** 将数组的总长度加1*/
    powerCount ++;
    cout << "插入后：" << endl;
    for(int i = 0; i < powerCount; i ++)
    {
        cout << power[i] << "\t";
    }
    //删除元素
    double deletePower;
    int deleteIndex = INT_MIN;
    cout << "请输入要删除的数字：";
    cin >> deletePower;
    for(int i = 0; i < powerCount; i ++)
    {
        if(deletePower == power[i]){
            deleteIndex = i;
            break;
        }
    }
    if(deleteIndex == INT_MIN){
        cout << "没有找到对应的要删除数字" << endl;
    }else{
        for(int i = deleteIndex; i < powerCount - 1; i ++)
        {
            power[i] = power[i + 1];
        }
        powerCount --;
    }
    cout << "删除后：";
    for(int i = 0; i < powerCount; i ++)
    {
        cout << power[i] << "\t";
    }

    return 0;
}
