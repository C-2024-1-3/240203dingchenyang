//student.h                (这是头文件，在此文件中进行类的声明)
#include<string>
#include<iostream>
using namespace std;
class Student              //类声明
{

public:                   //公用成员函数原型声明
void display();
void set_value()
{
    cout<<"please enter the number,name,and sex:"<<endl;
    cin>>num>>name>>sex;
}
private:
int num;
string name;
char sex;
};
