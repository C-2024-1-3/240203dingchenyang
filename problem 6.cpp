#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	int temp = b;
	while (a % b)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return temp;
}
int main()
{
    int a,b;
    cin>>a>>b;
    //最大公约数
    cout<<gcd(a,b)<<endl;
    //最小公倍数
    cout<<(a*b)/gcd(a,b)<<endl;
    system("pause");
    return 0;
}