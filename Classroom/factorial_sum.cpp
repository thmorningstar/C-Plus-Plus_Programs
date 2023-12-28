#include<iostream>
using namespace std;

double sum_factorial(int num)
{
    double res=0;
    double fact=1,i;

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
        res=res+i/fact;
    }
    return res;
}

int main()
{
    double num;

    cout<<"Enter the number for finding factorial "<<endl;
    cin>>num;
    cout<<"Sum of the factorial of the given number is " <<sum_factorial(num);
    return 0;
}