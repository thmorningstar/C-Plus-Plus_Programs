//Creates two objects which take two point objects and 
//compute the distance between two two objects.

#include<iostream>
#include<cmath>
using namespace std;

class Points
{
    friend int distance(Points,Points);
    int x,y;

    public:
        Points(int a, int b);
        void displayPoints();
};

Points :: Points(int a,int b)
{
    x=a;
    y=b;
}

void Points :: displayPoints()
{
    cout<<"The Point X And Y is: "<<"("<<x <<","<<y<<")"<<endl;
}

int distance(Points p1,Points p2)
{
    int x_diff=(p2.x-p1.x);
    int y_diff=(p2.y-p1.y);

    int diff=sqrt(pow(x_diff,2)+pow(y_diff,2));

    return diff;
}


int main()
{
    Points p1(5,6);
    p1.displayPoints();

    Points p2(7,8);
    p2.displayPoints();

    cout<<"The difference of two points X and Y is "<<distance(p1,p2)<<endl;

    return 0;
}