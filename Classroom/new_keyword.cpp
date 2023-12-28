#include<iostream>
using namespace std;

class A
{
    public:
    int size,*ptr;
    A();
    void show();
};error

A :: A()
{
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    ptr=new int(size);
}

void A :: show()
{
    int count=1;
    cout<<"Enter the elemnts of array:"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>ptr[i];
    }

    for(int i=0; i<size; i++)
    {
        cout<<count++<<"st element is "<<*(ptr+i)<<endl;
    }
}

int main()
{
    A obj;
    obj.show();
    return 0;
}