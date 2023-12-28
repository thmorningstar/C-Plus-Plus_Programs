// Increment & Decrement Operator Overloading

#include<iostream>
using namespace std;

class A
{
    int a;
    public:
        void setData()
        {
            cout<<"Enter the value: "<<endl;
            cin>>a;
        }
        void displayData()
        {
            cout<<""<<a<<endl;
        }

        void operator++()
        {
            a=a+1;;              //Prefix Increment Function

        }
        void operator--()
        {
            a=a-1;;              //Prefix Decrement Function

        }

};


int main()
{
    A aa;
    aa.setData();
    cout<<"Original Value:"<<endl;
    aa.displayData();
    ++aa;     //Increment Operator(Prefix)
    cout<<"Value after increment:"<<endl;
    aa.displayData();

    --aa;     //Decrement Operator(Prefix)
    cout<<"Value after decrement:"<<endl;
    aa.displayData();
    return 0;
}

