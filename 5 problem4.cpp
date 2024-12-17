#include<bits/stdc++.h>
using namespace std;

struct Student
{
    int number;
    int score;
};

void myMax(Student *students)
{
    int index=0;
    for(int i=1;i<5;i++)
    {
        if(students[i].score>students[i-1].score)
        {
            index=i;
        }
    }
    cout<<"The student with the highest score is student number "<<students[index].number<<endl;
    return;
}

int main()
{
    Student students[5];
    for(int i=0;i<5;i++)
    {
        cin>>students[i].number>>students[i].score;
    }
    myMax(students);
    return 0;
}
