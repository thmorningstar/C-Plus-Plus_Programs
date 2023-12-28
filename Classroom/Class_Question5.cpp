//Declare a 2D array as a global variable & store 5 names .desine a class where a string variable. input the value on variable'
//Input the value on the class variable & find it in 2D global variable 


#include<iostream>
#include<string>
using namespace std;

string str[7][7]={"Suraj","Utkarsh","Ankit","Vicky","Maya","abhishek"};

class Abc
{
    public:
    string name;
    void getString();
};

void Abc :: getString()
{
    cout<<"Enter string name "<<endl;
    cin>>name;

    for(int i=0;i<6;i++)
    {
        if(name==str[0][i])
        {
            cout<<"The name is present in Global Variable string"<<endl;
            break;
        }
        
    }

            
}

int main()
{
   Abc obj;
   obj.getString();

   return 0;
}

