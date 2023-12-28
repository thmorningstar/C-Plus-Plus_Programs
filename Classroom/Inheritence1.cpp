#include<iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout<<"CLASS A"<<endl;
        }

        int x;
};
class B : public A
{
    public:
        B()
        {
            cout<<"CLASS B"<<endl;
        }

        int y;

};
class C : public B
{
    public:
        C()
        {
            cout<<"CLASS C"<<endl;
        }

        int z;
        void sum();
};

void C :: sum()
{
    cout<<"Enter 3 values:"<<endl;
    cin>>x>>y>>z;
    cout<<"Sum: "<<x+y+z <<endl;
}

int main()
{
    C obj;
    obj.sum();
}

