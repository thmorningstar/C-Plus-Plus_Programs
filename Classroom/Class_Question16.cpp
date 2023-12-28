/*Define a string variable in a class & dynamically initialize in a constructor.
In input function input the values of string variables and 
In count functuion,print the total no. of characters of that string */

#include<iostream>
#include<string.h>
using namespace std;


class A
{
    int size;
    char *ptr;

    public:
        A();
        void inputFunction();
        void show();
        void count();
};

A :: A()
{
    cout<<"Enter the size of string:"<<endl;
    cin>>size;

    ptr= new char(size);
}

void A :: inputFunction()
{
    cout<<"Enter the string:"<<endl;
    //cin>>ptr;
    cin.ignore();
    cin.getline(ptr,size);
}

void A :: show()
{
    cout<<"Entered String: "<<ptr<<endl;
}

void A :: count()
{
    int count=0;

    for(int i=0; ptr[i]!='\0'; i++)
    {
        if(ptr[i] !=' ') //this condition is to avoid counting space
        {
          count++;
        }
    }

    cout<<"Total number of charaters in this given string is "<<count;
}


int main()
{
    A obj;
    obj.inputFunction();
    obj.show();
    obj.count();
    return 0;
}