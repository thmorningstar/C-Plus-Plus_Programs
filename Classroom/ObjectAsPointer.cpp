#include<iostream>
using namespace std;

class A
{
    public:
        int a;
        char *ch;
        A()
        {
            cout<<"CONSTRUCTOR CALLED"<<endl;
        }
};

int main()
{
    A *ptr=new A;
    cout<<"Enter your Name: "<<endl;
    cin.getline(ptr->ch,50
    
    
    
    
    
    
    
    
    );
    cout<<"Enter your Age: "<<endl;
    cin>>ptr->a;

    cout<<"Your Name is "<<ptr->ch<<endl;
    cout<<"Your Age is "<<ptr->a<<endl;
    return 0;
}