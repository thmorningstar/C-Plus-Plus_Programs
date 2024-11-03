#include<iostream>
using namespace std;
int main()
{
    int a,b,z;
    cout<<"Enter the number \n";
    cin>>a;

    cout<<"Enter the number \n";
    cin>>b;

    //arithmatic operator

    cout<<"\n Sum of two numbers is: "<<a+b;
    cout<<"\n Substract of two numbers is: "<<a-b;
    cout<<"\n Product of two numbers is: "<<a*b;
    cout<<"\n Division of two numbers is: "<<a/b;
    cout<<"\n MOdulus of two numbers is: "<<a%b;

    //Increment-decrement Operator

    cout<<"\n\nThe value of a++: "<<a++;
    cout<<"\nThe value of a--: "<<a--;
    cout<<"\nThe value of ++a: "<<++a;
    cout<<"\nThe value of --a: "<<--a;

    //Comparision Operator

    cout<<"\n\nThe value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;

    //Logical Operators

    cout<<"The value of AND logical operator((a==b)&&(a>b)) is: "<<((a==b)&&(a>b))<<endl;
    cout<<"The value of AND logical operator((a==b)||(a>b)) is: "<<((a==b)||(a>b))<<endl;
    cout<<"The value of AND logical operator(!(a==b)) is: "<<(!(a==b))<<endl;

    return 0;
}