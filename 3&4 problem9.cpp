#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int len1, len2;
    cout<<"输入数组1的元素个数和元素：";
    cin>>len1;
    vector<int> list1(len1);
     for(int i=0;i<len1;i++)
    {
        cin>>list1[i];
    }
    cout<<"输入数组2的元素个数和元素：";
    cin>>len2;
    vector<int> list2(len2);
    for(int i=0;i<len2;i++)
    {
        cin>>list2[i];
    }
    vector<int> list;
    for(int i=0;i<list1.size();i++)
    list.push_back(list1[i]);
    for(int i=0;i<list2.size();i++)
    list.push_back(list2[i]);
    sort(list.begin(), list.end());
    cout<<"合并后的数组为：";
    for(int i=0;i<list.size();i++)
    cout<<list[i]<<" ";
    return 0;
}