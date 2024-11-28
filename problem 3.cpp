#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3;
	cin>>s1>>s2>>s3;
	if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1)
	{
		if (s1 == s2 || s2 == s3 || s1 == s3)
		{
			cout << "Success!" << endl;
		}
		cout << (s1 + s2 + s3) << endl;
	}
	else
	{
		cout << "failed" << endl;
	}
	system("pause");
	return 0;
}