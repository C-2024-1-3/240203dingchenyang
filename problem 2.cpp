#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x;
    cin>>x;
    if(x>0 && x<1)
    {
        cout<<3-2*x<<endl;
    }
    else if(x>=1 && x<=5)
    {
        cout<<2/(4*x)+1<<endl;
    }
    else if(x>=5 && x<10)
    {
        cout<< pow(x,2)<<endl;
    }
    system("pause");
    return 0;
}