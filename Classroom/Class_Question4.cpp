/* Declare two strings as private in a class.
In the function of that class change the case of both strings*/

#include<iostream>
#include<string>
using namespace std;

class Case
{
    private:
        string str1;
        string str2;

        public:
            void getString();
            void conversion1();
            void conversion2();
            void display();
};

void Case :: getString()
{
    cout<<"Enter the string1 name"<<endl;
    cin>>str1;
    cout<<"Entred String1 : "<<str1<<endl;

    cout<<"Enter the string2 name"<<endl;
    cin>>str2;
    cout<<"Entred String2 : "<<str2<<endl;
}

void Case :: conversion1()
{
    for(int i=0;i<=str1.length();i++)
    {
        if(str1[i]>='a' && str1[i]<='z')
        {
            str1[i]=str1[i]-32;
        }
        else if(str1[i]>='A' && str1[i]<='Z')
        {
            str1[i]=str1[i]+32;
        }
    }
}
void Case :: conversion2()
{
    for(int i=0;i<=str2.length();i++)
    {
        if(str2[i]>='a' && str2[i]<='z')
        {
            str2[i]=str2[i]-32;
        }
        else if(str2[i]>='A' && str2[i]<='Z')
        {
            str2[i]=str2[i]+32;
        }
    }
}

void Case :: display()
{
    cout<<"Case change in String1: "<<str1<<endl;
    cout<<"Case change in String2: "<<str2<<endl;
}

int main()
{
    Case A;
    A.getString();
    A.conversion1();
    A.conversion2();
    A.display();
    return 0;
}