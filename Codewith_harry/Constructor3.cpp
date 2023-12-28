// Constructor Overloading or Multiple constructor in a class

#include<iostream>
using namespace std;

class Complex
{
    int a,b;

    public:
        Complex(int x, int y)
        {
            a=x;
            b=y;
        }

        void printData()
        {
            cout<<"Your Number is "<<a <<"+"<<b<<"i"<<endl;
        }

        Complex(int x)
        {
            a=x;
            b=0;
        }

};

int main()
{
    Complex c1(3,4);
    c1.printData();

    Complex c2(5);
    c2.printData();

    return 0;
}
