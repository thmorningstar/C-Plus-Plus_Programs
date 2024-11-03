#include<iostream>
using namespace std;

class Complex
{
    int a,b;

    public:
     void setData(int n1,int n2)
     {
        a=n1;
        b=n2;
     }

    void printData()
    {
        cout<<"Your number is "<<a <<"+"<<b<<"i"<<endl;
    }

    friend Complex sumComplex(Complex o1,Complex o2);
};

Complex sumComplex(Complex o1,Complex o2)
{
    Complex o3;

    o3.setData((o1.a + o2.a), (o2.b + o2.b));

    return o3;

}


int main()
{
    Complex c1,c2,sum;

    c1.setData(1,2);
    c1.printData();

    c2.setData(4,5);
    c2.printData();

    sum=sumComplex(c1,c2);
    sum.printData();

}