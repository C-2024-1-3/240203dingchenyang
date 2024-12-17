#include<iostream>
using namespace std;

class Point
{
    private:
        int x;
        int y;
    public:
        Point(int x, int y)
        {
            this->x = x;
            this->y = y;
            cout<<"The position of the point now is: "<<x<<" "<<y<<endl;
        }
        
        void setPoint(int i,int j)
        {
            x+=i;
            y+=j;
        }
        void display()
        {
            cout<<"The position of the point now is: "<<x<<" "<<y<<endl;
        }
};

int main()
{
    Point p(60,80);
    int i,j;
    cin>>i>>j;
    p.setPoint(i,j);
    p.display();
    return 0;
}