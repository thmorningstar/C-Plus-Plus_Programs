
#include<iostream>
using namespace std;

class Average
{
    int a,b,c,d,e;
    float avg;

    public:
    void getdata()
    {
        cout<<"Enter the five numbers"<<endl;
        cin>>a>>b>>c>>d>>e;
    }

    void process()
    {
        avg=(a+b+c+d+e)/5;
    }

    void putdata()
    {
        cout<<"Average "<<avg<<endl;
    }
};

int main()
{
    Average a1;
    a1.getdata();
    a1.process();
    a1.putdata();
    

    return 0;
}