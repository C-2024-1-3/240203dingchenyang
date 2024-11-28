#include<iostream>
#include<vector>
#include <set>
using namespace std;

int main()
{
    vector<int> numbers;
    set<int> set;
    for(int i=0;i<10;i++)
    {
        int x;
        cin>>x;
        set.insert(x);
    }
    for(auto it=set.begin();it!=set.end();it++)
    {
        numbers.push_back(*it);
    }
    for(int i:numbers)
    cout<<i<<" ";
    return 0;

}