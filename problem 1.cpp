#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>='a'&& ch<='z')
    cout<<(char)toupper(ch)<<endl;
    else
    cout<<(int)ch+1<<endl;
    system("pause");
    return 0;
}