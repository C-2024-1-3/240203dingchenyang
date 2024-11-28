#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int>&a)
{
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a.size()-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    vector<int> a(10);
    cout<<"排序前的数组为：";
    for(int i=0;i<10;i++)
    cin>>a[i];

    bubbleSort(a);
    cout<<"排序后的数组为：";
    for(int i:a)
    cout<<i<<" ";

    return 0;
}