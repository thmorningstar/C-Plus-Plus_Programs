#include<iostream>
using namespace std;

class Employee
{
    private:
    int a,b,c;

    public:
    int d,e;

    void setData(int a1,int b1,int c1);
    void getData();
};

void Employee:: setData(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

void Employee:: getData()
{
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of d is "<<d<<endl;
    cout<<"The value of e is "<<e<<endl;
}

int main()
{
    Employee Suraj;
     //Suraj.a=111; This will show error as "a" is private
     Suraj.d= 100;
     Suraj.e= 200;
     Suraj.setData(1,2,3);
     Suraj.getData();

     return 0;
}