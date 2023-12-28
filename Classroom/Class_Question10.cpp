/*Define the matching in a class A. The funtion match the twoinput strings and
 the second function match the repeatedstring im a 2D Char Array.*/

#include<iostream>
#include<string>
using namespace std;

class String
{
    string str1;
    string str2;
    public:
        void getString();
        void printString();
        void compare();
};

void String :: getString()
{
    int a;
    cout<<"Enter 1st string:"<<endl;
    getline(cin,str1);

    cout<<"Enter 2st string:"<<endl;
    getline(cin,str2);
}

void String :: printString()
{
    cout<<"Entered String are("<<str1<<")"<<" and ("<<str2<<")"<<endl;
}

void String :: compare()
{
    int check= str1.compare(str2);

    if(check == 0)
    {
        cout<<"String Matched!!!"<<endl;
    }
    else
    {
        cout<<"String Not Matched!!!"<<endl;
    }
}

int main()
{
    String S;
    S.getString();
    S.printString();
    S.compare();
    return 0;
}