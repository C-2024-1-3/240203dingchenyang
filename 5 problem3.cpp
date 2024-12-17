#include<iostream>
using namespace std;

class Cuboid
{
    private:
    int length, width, height;

    public:
    void Set()
    {
        cout<<"Please enter the length,width and height: "<<endl;
        cin>>length>>width>>height;
    }

    int Calculate()
    {
        return length*width*height;
    }

    void Display()
    {
        cout<<"The volume of the cuboid is: "<<Calculate()<<endl;
    }
};

int main()
{
    Cuboid c1,c2,c3;
    c1.Set();
    c2.Set();
    c3.Set();
    c1.Display();
    c2.Display();
    c3.Display();
    return 0;
}