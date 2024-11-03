#include<iostream>

void sum(int a,int b);

int main()
{
    int a=4,b=8,z=0;
    char ch='a';
    bool is_true=true;


    std::cout<<"The value of A is "<<a;
    std::cout<<"\nThe value of B is "<<b;
    std::cout<<"\nThe value of Ch is "<<ch;
    std::cout<<"\n z="<<is_true;

    sum(a,b);

    return 0;
 
}

void sum(int a, int b)
{
    int sum;
    sum=a+b;

    std::cout<<"\nThe sum of A and B is "<<sum;
}