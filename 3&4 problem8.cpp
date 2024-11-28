#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<bool> condition(100,true);
    
    for(int i=1;i<100;i++)
    {
        for(int j=i;j<100;j+=i+2)
        {
            condition[j]=!condition[j];
        }
    }
    cout<<"开着的柜子为："<<endl;
    for(int i=0;i<condition.size();i++)
    {
        if(condition[i])
        cout<<i+1<<" ";
    }
    return 0;
}