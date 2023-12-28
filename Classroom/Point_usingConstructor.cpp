#include<iostream>
using namespace std;

class Point
{
    int x,y;
    
        public:
        Point()
        {}
        Point(int a, int b);
        void display();
        void sum(Point p1, Point p2);
};


Point :: Point(int a, int b)
{
    x=a;
    y=b;
}

void Point :: display()
{
    cout<<"("<<x<<","<<y<<")"<<endl;
}

void Point :: sum(Point p1, Point p2 )
{
    int temp1= p1.x + p2.x;
    int temp2= p1.y + p2.y;

    cout<<"Sum of the 1st and 2nd vertices of the graph is "<<"("<<temp1<<","<<temp2<<")"<<endl;
}

int main()
{
    Point p1(1,2),p2(3,4),p3;
    cout<<"First vertex of the graph"<<endl;
    p1.display();
    cout<<"second vertex of the graph"<<endl;
    p2.display();
    p3.sum(p1,p2);

    return 0;
}