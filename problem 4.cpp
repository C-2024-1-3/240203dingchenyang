#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    switch (s[1])
    {
        case '+':
        {
            cout<<(s[0]-'0')+(s[2]-'0')<<endl;
            break;
        }
        case '-':
        {
            cout<<(s[0]-'0')-(s[2]-'0')<<endl;
            break;
        }
        case '*':
        {
            cout<<(s[0]-'0')*(s[2]-'0')<<endl;
            break;
        }
        case '/':
        {
            cout<<(s[0]-'0')/(s[2]-'0')<<endl;
            break;
        }
        case '%':
        {
            cout<<(s[0]-'0')%(s[2]-'0')<<endl;
            break;
        }
        default:
        {
            cout<<"Invalid operation!"<<endl;
            break;
        }
    }
    system("pause");
    return 0;
}