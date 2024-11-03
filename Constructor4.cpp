//Constructor with Default Argument 

#include<iostream>
using namespace std;

class Simple
{
     int data1;
     int data2;
         
    public:
        Simple(int a, int b=5)
        {
            data1=a;
            data2=b;
        }

        void printData();

};

void Simple :: printData()
{
    cout<<"Your Data1 is "<<data1 <<" and Data2 is "<<data2<<endl;
}

int main()
{
    Simple s1(4);    
    //Simple s1(4,8);    

    s1.printData();

    return 0;
}