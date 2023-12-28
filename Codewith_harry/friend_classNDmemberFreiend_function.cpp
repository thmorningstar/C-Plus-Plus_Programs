#include<iostream>
using namespace std;

//forward declaration

class complex;

class calculator
{
    public:

     int sumRealComplex(complex o1,complex o2);
     int sumComComplex(complex o1,complex o2);

     
};

class complex
{
    int a,b;

    //Declaring individually functions as freiend
    // friend int calculator ::sumRealComplex(complex o1,complex o2);
    // friend int calculator ::sumComComplex(complex o1,complex o2);

    //Aliter : Declaring the entire calculator class as friend
    friend class calculator;

    public:
    void setNumber(int a1, int a2)
    {
        a=a1;
        b=a2;
        
    }

    void printNumber()
    {
        cout<<"Your number is"<<a<<" + "<<b<<"i"<<endl;
    }


};

    int calculator :: sumRealComplex(complex o1,complex o2)
    {
        return(o1.a + o2.a);
    }
    int calculator :: sumComComplex(complex o1,complex o2)
    {
        return(o1.b + o2.b);
    }

    int main()
    {
        complex o1,o2;
        o1.setNumber(5,6);
        o1.printNumber();
        o2.setNumber(7,8);
        o2.printNumber();

        calculator calc;
        int res = calc.sumRealComplex(o1,o2);
        int resc = calc.sumComComplex(o1,o2);

        cout<<"The sum of real part of o1 and o2 is "<<res <<endl;
        cout<<"The sum of imaginary part of o1 and o2 is "<<resc <<endl;

        return 0;
    }


