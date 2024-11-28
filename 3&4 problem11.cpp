#include<iostream>
#include<string>
#include <map>
using namespace std;


int main()
{
    map<char,int> cnt;
    string s;
    getline(cin,s);
    for(char c:s)
    {
        c=tolower(c);
        if(isalpha(c))
        cnt[c]++;
    }
    for(auto p:cnt)
    {
       
        cout<<p.first<<":"<<p.second<<"times"<<endl;
    }
    return 0;
}