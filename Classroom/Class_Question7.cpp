/*Declare an integer array as private in a class and 
return the greater value of that array from the function of that class*/

#include<iostream>
using namespace std;

class Array
{
    private:
        int num[10];
    
    public:
        void getData();
        void printData();
        int grtData();
};

void Array :: getData()
{
    cout<<"Enter the element of Array:"<<endl;
    
    for(int i=0;i<10;i++)
    {
        cin>>num[i];
    }
}

void Array :: printData()
{
    cout<<"Entered Data Of the Array :"<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<" "<<num[i]<<endl;
    }
}

int Array :: grtData()
{
    //by sorting technique

    for(int i=0; i<10; i++)
    {
        if(num[0]<num[i])
        {
            num[0]=num[i];
        }
    }

    return num[0];
}

int main()
{
    Array A;
    A.getData();
    A.printData();
    cout<<"The gretest number: "<<A.grtData();

}