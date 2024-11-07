#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a;
    cin>>a;
    double x1=a;
    while(1)
    {
        double x2=(x1+(a/x1))*(1.0/2);
        if(fabs(x2-x1)<0.00001)
        {
            cout<<x2<<endl;
            break;
        }
        x1=x2;
    }
    system("pause");
    return 0;
}