#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact=1,i;

    for(i=num;i>0;i--)
    {
        fact=fact*i;
    }

    return fact;
}

int main()
{
    int num;
    cout<<"Enter the number to find factorial"<<endl;
    cin>>num;

    cout<<"Factorial of the given number is " <<factorial(num);

    return 0;
 
}