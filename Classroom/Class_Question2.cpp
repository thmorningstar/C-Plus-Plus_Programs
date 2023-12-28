/*Define a private String in Class A and Class B both and concate these two strings*/

#include<iostream>
#include<cstring>
using namespace std;

class B;
class A
{
    string S1;
    friend void concate(A &,B &);

    public:
        void printString1();
        friend void concate(A &,B &);
        
};

class B
{
    string S2;
    friend void concate(A &, B &);
    
        public:
        void printString2();
        friend void concate(A &, B &);
};
        

void A :: printString1()
{
    cout<<"Enter the 1st String"<<endl;
    getline(cin,S1);
}

void B :: printString2()
{
    cout<<"Enter the 2nd String"<<endl;
    getline(cin,S2);
}


void concate(A &s1, B &s2)
{
    string concated=s1.S1+s2.S2;

    cout<<"The concated string is "<<concated<<endl;
}

int main()
{
    A str1;
    str1.printString1();
    B str2;
    str2.printString2();

    concate(str1,str2);

    return 0;
}