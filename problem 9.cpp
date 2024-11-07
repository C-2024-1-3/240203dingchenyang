#include<iostream>
using namespace std;
int main()
{
    int total=2;
    int buy=2;
    int day=1;
    while(total<=100)
    {
        buy*=2;
        total+=buy;
        day++;
    }
    double ans=(total*0.8)/(day*1.0);
    cout<<ans<<endl;
    system("pause");
    return 0;
}