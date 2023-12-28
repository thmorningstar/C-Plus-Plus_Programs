/* Define sum function in a class A, The 1st function print the sum of three integers
and the 2nd function print the sum of Array.*/

#include<iostream>
#define size 10
using namespace std;
class A
{
    int x,y,z;
    public:
        void sumInt();
        void sumArray();
};

void A :: sumInt()
{
    int sum;
    cout<<"Enter the three numbers:"<<endl;
    cin>>x>>y>>z;

    sum = x+y+z;

    cout<<"Sum Of Three Integers: "<<sum<<endl;
}

void A :: sumArray()
{
    int num[size];
    int res=0,i;

    cout<<"\nEnter the elemnts of Array:"<<endl;

    for(i=0;i<size;i++)
    {
        cin>>num[i];
    }

    //For sum

    for(i=0;i<size;i++)
    {
        res = res + num[i];
    }

    cout<<"Sum of the elements of the Arrays: "<<res;

}

int main()
{
    A a;
    a.sumInt();
    a.sumArray();
    return 0;
}