/* sum int array using array using class*/

#include<iostream>
using namespace std;

class Array
{
    int arry[5];

    public:
    void getarry();
    void printarry();
    int sum();
};

void Array::getarry()
{
    int i;
    cout<<"Enter the elements of array"<<endl;

    for(i=0;i<5;i++)
    {
        cin>>arry[i];
    }
    cout<<endl;


}

void Array::printarry()
{
    int i;

    cout<<"Enterd Elements of Array are : "<<endl;

    for(i=0;i<5;i++)
    {
        cout<<" "<<arry[i]<<endl;
    }

    cout<<endl;
}

int Array::sum()
{
    int res=0,i;

    for(i=0;i<5;i++)
    {
        res=res+arry[i];
    }

    return res;

}

int main()
{
    Array a1;

    a1.getarry();
    a1.printarry();
    cout<<"Sum of the all values of the array is "<<a1.sum()<<endl;

    return 0;
}