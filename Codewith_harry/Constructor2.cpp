//Parameterised constructor

#include <iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
         void printData();

         Complex(int x, int y); 
};

Complex :: Complex(int x, int y) //Parameterised Constructor
{
    a=x;
    b=y;
}

void Complex :: printData()
{
    cout<<"Your number is "<<a << "+" <<b <<"i"<<endl;   
}

int main()
{
    Complex c1(10,20);  //Implicit call
    c1.printData();

    Complex c2=Complex(5,10); //Explicit call
    c2.printData();
    return 0;
}