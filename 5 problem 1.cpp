#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:           // 数据成员为公用的
int hour;
int minute;
int sec ;

public:            
    void setTime(int h, int m, int s)
    {
        hour = h;
        minute = m;
        sec = s;
    }  // 设定时间

    void showTime()
    {
        cout<<hour<<":"<<minute<<":"<<sec<<endl;  // 输出时间
    }
};
int main()
{
    Time t1;//定义t1为Time类对象
    int h,m,s;
    cin>>h>>m>>s;
    t1.setTime(h,m,s);  // 设定t1的时间
    t1.showTime();  // 输出t1的时间
    return 0;
}
