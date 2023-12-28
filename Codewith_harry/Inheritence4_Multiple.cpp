//  MULTIPLE INHERITENCE

#include<iostream>
using namespace std;

class Base1
{
    protected:
        int a;
        int b;
    public:
        void setData1()
        {
            cout<<"Enter the two numbers:"<<endl;
            cin>>a>>b;
        }
};

class Base2
{
    protected:
        int c;
        int d;
    public:
        void setData2()
        {
            cout<<"Enter the two numbers:"<<endl;
            cin>>c>>d;
        }
};

class Derived : public Base1 , public Base2
{
    public:
        void display()
        {
            cout<<"The 1st data: "<<a<<endl;
            cout<<"The 2nd data: "<<b<<endl;
            cout<<"The 3rd data: "<<c<<endl;
            cout<<"The 4th data: "<<d<<endl;
            cout<<"The sum of all these data:"<<a+b+c+d<<endl;
        }
};
int main()
{
    Derived D;
    D.setData1();
    D.setData2();
    D.display();

    return 0;
}