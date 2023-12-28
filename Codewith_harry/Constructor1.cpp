
#include<iostream>
using namespace std;

class Complex
{
    int a, b;
    public:
        /*constructor is a special member function with the same name as of class
         It is use to initialise the object of a class
         It is automatically invoked whenever an object is created*/

         void getData();
         void printData();

         Complex(void); 
};

Complex :: Complex() //Default Constructor
{
    a=10;
    b=0;
}

void Complex :: printData()
{
    cout<<"Your number is "<<a << "+" <<b <<"i"<<endl;   
}

int main()
{
    Complex c1;
    c1.printData();

    return 0;
}