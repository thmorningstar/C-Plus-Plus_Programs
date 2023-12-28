#include<iostream>
using namespace std;

int main()
{

int num,i,res;
bool is_prime = true;

    cout<<"Enter the number  "<<endl;
    cin>>num;

        if(num==0 || num==1)
    {
        is_prime=false;
    }


    for(i=2;i<num;i++)
    {
        res=num%i;
        if(res==0)
        {
            is_prime=false ;
            //break;
        }
    }

    if(is_prime==true)
    {
        cout<<"Entered number is prime"<<endl;
    }
    else
    {
        cout<<"Entered number is not prime"<<endl;
    }

    return 0;
    
}