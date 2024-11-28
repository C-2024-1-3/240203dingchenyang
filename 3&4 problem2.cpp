#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n)
{
    if(n==1) return false; 
    for(int i = 2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int cnt=0;
    for(int i=2; ; i++)
    {
        if(cnt==200)
        break;
       
        if(isPrime(i))
        {
            cnt++;
            cout<<i<<" ";
            if(cnt%10==0)
            cout<<endl;
        }
    }
    return 0;
}