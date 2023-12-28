/*Declare a string variable in a class and initialize your name on that variable
 in the constructor and print it from the function */

#include<iostream>
#include<string>
using namespace std;

class String
{
   string name;
      public:
         String();
         void printName();
};

String :: String()
{
   cout<<"Enter your name:"<<endl;
   getline(cin,name);
}

void String ::printName()
{
   cout<<"Your name is "<<name<<endl;
}

int main()
{
   String str;
   str.printName();
   return 0;
}