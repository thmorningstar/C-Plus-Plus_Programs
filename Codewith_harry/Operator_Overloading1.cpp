#include<iostream>
using namespace std;

class Demo
{
    int a;
    public:
        void setData();
        void putData();
        void printData()
        {
            cout<<"Sum of two Objects is "<<a<<endl; 
        }

        Demo operator+(Demo &bb)
    {
        Demo cc; 
        cc.a = a + bb.a;

        return cc;
    }


};

void Demo :: setData()
{
    cout<<"Enter the No."<<endl;
    cin>>a;
}

void Demo :: putData()
{
    cout<<"Value of a is "<<a<<endl;
}


int main()
{
    Demo aa,bb,cc;

    aa.setData();
    bb.setData();
    cc=aa+bb;

    aa.putData();
    bb.putData();
    cc.printData();
    return 0;
}
