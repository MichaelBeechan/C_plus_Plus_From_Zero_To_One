#include <iostream>

using namespace std;
#define INT_MIN -1
int main()
{
    double power[99];  //�����Сһ��ȷ�����Ͳ����޸���
    int powerCount = 0; // ��ǰ�����е�Ԫ�ظ���
    double insertPower; //Ҫ���������
    int insertIndex = 0;  //Ĭ�ϲ����һ��Ԫ�أ��������ֵ��±�
    power[powerCount ++] = 45771;
    power[powerCount ++] = 42322;
    power[powerCount ++] = 40907;
    power[powerCount ++] = 40706;

    //ð��
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
    cout << "�����" << endl;
    for(int i = 0; i < powerCount; i ++){
        cout << power[i] << "\t";
    }
    cout << endl;
    //����
    cout << "������Ҫ��������֣�";
    cin >> insertPower;

    insertIndex = powerCount;
    /** 1 �ҵ���һ���Ȳ���Ԫ�ش��λ��insertIndex*/
    for(int i = 0; i < powerCount; i ++)
    {
        if(insertPower > power[i]){
            insertIndex = i;
            break;
        }
    }
    /** 2 �����һ��Ԫ�ؿ�ʼ�������ָ��Ƶ����һ��Ԫ����*/
    for(int i = powerCount - 1; i >= insertIndex; i --){
        power[i + 1] = power[i];
    }
    /** ��Ҫ��������ָ��Ƹ��±�insertIndex��Ԫ��*/
    power[insertIndex] = insertPower;
    /** ��������ܳ��ȼ�1*/
    powerCount ++;
    cout << "�����" << endl;
    for(int i = 0; i < powerCount; i ++)
    {
        cout << power[i] << "\t";
    }
    //ɾ��Ԫ��
    double deletePower;
    int deleteIndex = INT_MIN;
    cout << "������Ҫɾ�������֣�";
    cin >> deletePower;
    for(int i = 0; i < powerCount; i ++)
    {
        if(deletePower == power[i]){
            deleteIndex = i;
            break;
        }
    }
    if(deleteIndex == INT_MIN){
        cout << "û���ҵ���Ӧ��Ҫɾ������" << endl;
    }else{
        for(int i = deleteIndex; i < powerCount - 1; i ++)
        {
            power[i] = power[i + 1];
        }
        powerCount --;
    }
    cout << "ɾ����";
    for(int i = 0; i < powerCount; i ++)
    {
        cout << power[i] << "\t";
    }

    return 0;
}
