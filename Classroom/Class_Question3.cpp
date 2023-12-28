/*Declare two inters in a Class A as a private and two intergers in Class B as a private
and print the average of the mean values of both*/

#include<iostream>
using namespace std;
class B;
class A
{
    int a,b;
    friend void AvgClass(A,B);
    public :
        float avg1;
        void setvalue(int x, int y);
        void average1();
        friend void AvgClass(A,B);
};

void A :: setvalue(int x, int y)
{
    a=x;
    b=y;
}

void A :: average1()
{
    avg1=float (a+b)/2;

    cout<<"1st Average: "<<avg1<<endl;
}

class B
{
    int a,b;
    friend void AvgClass(A,B);
    public :
        float avg2;
        void setvalue(int x, int y);
        void average2();
        friend void AvgClass(A,B);
};

void B :: setvalue(int x, int y)
{
    a=x;
    b=y;
}

void B :: average2()
{
    avg2=float (a+b)/2;

    cout<<"2st Average: "<<avg2<<endl;
}

void avgClass(A a1, B b1)
{
    float mean =float (a1.avg1 + b1.avg2)/2;

    cout<<"The average of class A and class B is "<<mean<<endl;
}

int main()
{
    A AVG1;
    AVG1.setvalue(10,6);
    AVG1.average1();

    B AVG2;
    AVG2.setvalue(8,10);
    AVG2.average2();

    avgClass(AVG1, AVG2);

    return 0;
}

