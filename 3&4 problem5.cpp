#include<iostream>
using namespace std;

int dfs_monkey(int day)
{
   if(day==10) return 1;

   return (dfs_monkey(day+1)+1)*2;
}

int main()
{
    cout<<"第一天摘桃子的个数为："<<dfs_monkey(0)<<endl;
    return 0;
}