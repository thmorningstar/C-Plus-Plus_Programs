//Equality Operator(==)

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

        bool operator==(Demo &bb)
    {
        if(a==bb.a)
        {
            return true;
        }
        else
        {
            return false;
        }
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
    Demo aa,bb;

    aa.setData();
    bb.setData();

    if(aa==bb)
    {
        cout<<"Values equal"<<endl;
    }
    else
    {
        cout<<"Values not equal"<<endl;
    }
    return 0;
}
