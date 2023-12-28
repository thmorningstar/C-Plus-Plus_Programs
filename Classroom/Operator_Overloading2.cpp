//In case of Unary Operator(Pre Fix)

#include<iostream>
using namespace std;

class Operator_Unary
{
    public:
        int x,y;
        Operator_Unary(int , int);
        void operator++()
        {
            //x=x+1;
            ++x;
            //y=y+1;
            ++y;
        }
        void operator--()
        {
            //x=x-1;
            --x;
            //y=y-1;
            --y;
        }
};

Operator_Unary::Operator_Unary(int i, int j)
{
    x=i;
    y=j;
}


int main()
{
    int a,b,c,d;

    cout<<"Enter the two numbers: "<<endl;
    cin>>a>>b;
    Operator_Unary obj(a,b);
    cout<<"1st number: "<<obj.x<<endl;
    cout<<"2nd number: "<<obj.y<<endl;
    ++obj;
    cout<<"After increment 1st number is : "<<obj.x<<endl;
    cout<<"After increment 2nd number is : "<<obj.y<<endl;
    
    cout<<"\nEnter the two numbers: "<<endl;
    cin>>c>>d;
    Operator_Unary obj2(c,d);
    cout<<"1st number: "<<obj2.x<<endl;
    cout<<"2nd number: "<<obj2.y<<endl;
    --obj2;
    cout<<"After decrement 1st number is : "<<obj2.x<<endl;
    cout<<"After decrement 2nd number is : "<<obj2.y<<endl;


    return 0;
}