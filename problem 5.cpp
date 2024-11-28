#include <iostream>
#include<string>
#include<ctype.h>
using namespace std;
int cnt[4];
int main()
{
    string s;
    getline(cin,s);
    for(char ch:s)
    {
        if(isalpha(ch))
        cnt[0]++;
        else if(isdigit(ch))
        cnt[1]++;
        else if(ch==' ')
        cnt[2]++;
        else
        cnt[3]++;
    }
    cout<<"Alphabetic characters: "<<cnt[0]<<endl;
    cout<<"Numeric characters: "<<cnt[1]<<endl;
    cout<<"Whitespace characters: "<<cnt[2]<<endl;
    cout<<"Other characters: "<<cnt[3]<<endl;
    system("pause");
    return 0;
}