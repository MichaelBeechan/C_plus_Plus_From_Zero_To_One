#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
    public:
        //构造函数的重载规则与普通函数重载相同
        Student();
        Student(int); //如果构造函数只有唯一的参数，那么调用时可以直接赋值
        Student(string, string);  //带参构造
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
