#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
    public:
        //���캯�������ع�������ͨ����������ͬ
        Student();
        Student(int); //������캯��ֻ��Ψһ�Ĳ�������ô����ʱ����ֱ�Ӹ�ֵ
        Student(string, string);  //���ι���
        virtual ~Student();

        void ShowInfo();

        string GetName() { return m_Name; }
        void SetName(string val) { m_Name = val; }
        string GetDesc() { return m_Desc; }
        void SetDesc(string val) { m_Desc = val; }
        int GetAge() { return m_Age; }
        void SetAge(int val) {
            if(val < 0){
                m_Age = 18;
            }else{
                m_Age = val;
            }
        }

    protected:

    private:
        string m_Name;
        string m_Desc;
        int m_Age;
};

#endif // STUDENT_H
