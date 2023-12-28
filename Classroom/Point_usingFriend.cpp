#include<iostream>
using namespace std;

class Point
{
    int x,y;
    
        public:
        void getData();
        void display();
        friend void sum(Point p1, Point p2);
};


void Point ::getData ()
{
    int a,b;
    cout<<"Enter the value of cordinates:"<<endl;
    cin>>a>>b;
    x=a;
    y=b;
}

void Point :: display()
{
    cout<<"Cordinate of the graph:"<<"("<<x<<","<<y<<")"<<endl;
}

void sum(Point p1, Point p2 )
{
    int temp1= p1.x + p2.x;
    int temp2= p1.y + p2.y;

    cout<<"Sum of the 1st and 2nd vertices of the graph is "<<"("<<temp1<<","<<temp2<<")"<<endl;
}

int main()
{
    Point p1,p2,p3;
    cout<<"First vertex of the graph"<<endl;
    p1.getData();
    p1.display();
    cout<<"second vertex of the graph"<<endl;
    p2.getData();
    p2.display();
    sum(p1,p2);

    return 0;
}