/*Copy Constructor: A Copy constructor is an overloaded constructor used to declare
and initialize an object from another object.*/

#include <iostream>
using namespace std;

class Number
{
    int num;

    public:
        Number(int n);
        Number(Number &obj);
        Number()                 //Default Constructor
        {
            num=0;        
        }
        void display();
};

Number :: Number(int n)
{
    num = n;
}

//When no copy constructor found , compiler supplies its own copy constructor
Number ::Number(Number &obj)     // ----->> Copy Constructor
{
    cout<<"Copy Constructor Called!!!"<<endl;
    num=obj.num;
}

void Number ::display()
{
    cout << "The number is " << num << endl;
}

int main()
{
    Number x,y(10),z,A2;
    y.display();
    x.display();
    z.display();

    // A1 should exactly resembles to x or y or z
    Number A1(y);  //Copy constructor invoked
    A1.display();

    A2=y; // Copy constructor will not be invoked
    A2.display();
    Number A3 = y; // Copy constructor invoked
    A3.display();

    return 0;
}
