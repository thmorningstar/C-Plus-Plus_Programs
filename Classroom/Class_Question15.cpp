// Copy Constructor
//Enter a string , roll and fee in a class
// & copy the values of string from one object to another object.

#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int rno;
    char name[50];
    double fee;
    public:
    student(int,char[],double);
    student(student &t)       //copy constructor (member wise initialization)
    {
        rno=t.rno;
        strcpy(name,t.name);
        fee=t.fee;
    }
    void display();
    void disp()
    {
        cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
    }
     
};
    student::student(int no, char n[],double f)
    {
        rno=no;
        strcpy(name,n);
        fee=f;
    }   
 
   void student::display()
    {
        cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
    }
     
 
 
int main()
{
    student s(1001,"Manjeet",10000);
    s.display();
     
    student manjeet(s);   //copy constructor called
    manjeet.disp();
     
    return 0;
}