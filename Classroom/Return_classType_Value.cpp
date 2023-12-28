/*Returning a class type value or object from a function*/

#include<iostream>
using namespace std;

class B;
class A
{
    public:
        B show();
};


class B
{
    public:
    char ch[10];
    int x;
};

B A :: show()
{
    B obj;
    cout<<"Enter a string: "<<endl;
    cin.getline(obj.ch,9);

    cout<<"Enter a Number: "<<endl;
    cin>>obj.x;
    return obj;
}

int main()
{
    B b;
    A obj;
    b= obj.show();

    cout<<"You Entered: "<<b.ch<<endl;
    cout<<"X: "<<b.x;
    return 0;
}