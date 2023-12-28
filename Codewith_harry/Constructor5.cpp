/* Dynamically initialisation of object using Constructor*/

#include<iostream>
using namespace std;

class BankDeposite
{
    int principle;
    int time;
    float rate;
    float returnValue;

    public:
         BankDeposite()
         {};
        BankDeposite(int p, int t, float r); // rate int the form of decimal (i.e 0.4)
        BankDeposite(int p, int t, int r); // rate int the form of int (i.e 4)
        
        void display();
};

BankDeposite :: BankDeposite(int p, int t, float r)
{
    principle=p;
    time=t;
    rate=r;
    returnValue=principle;

    for(int i=0; i<t; i++)
    {
        returnValue = returnValue * (1+r); 
    }
}


BankDeposite :: BankDeposite(int p, int t, int r)
{
    principle=p;
    time=t;
    rate= float(r)/100;
    returnValue=principle;

    for(int i=0; i<t; i++)
    {
        returnValue = returnValue * (1+rate); 
    }
}

void BankDeposite :: display()
{
    cout<<endl<<"Your Principle amount was "<<principle<<endl
    <<"Return value after "<<time<<" (year/years) is "<<returnValue <<endl;
}

int main()
{
    BankDeposite BD1,BD2,BD3;

    int p;
    int t;
    float r;
    int R;

    cout<<"Enter the value of p,t,r"<<endl;
    cin>>p>>t>>r;
    BD1 = BankDeposite(p,t,r);
    BD1.display();

    cout<<endl<<"Enter the value of p,t,R"<<endl;
    cin>>p>>t>>R;
    BD2 = BankDeposite(p,t,R);
    BD2.display();
    return 0;
}

