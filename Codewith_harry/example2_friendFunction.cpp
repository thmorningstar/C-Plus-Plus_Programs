#include<iostream>
using namespace std;
class B;

class A
{
    int data1;
    
    friend void display(A);

    public:
        void SetData(int x); 
        friend void exchange(A &s1,B &s2);
        void getData1()
         {
             cout<<"The value of data1 before exchange: "<<data1<<endl;
         }
};


void A :: SetData(int num)
{
    data1=num;
}

class B
{
    int data2;
    friend void display(B);
    public:
        void SetData(int x);
        
        friend void exchange(A &s1,B &s2);
        void getData2()
         {
             cout<<"The value of Data2 before exchange: "<<data2<<endl;
         }
 };


void B :: SetData(int num)
{
    data2=num;
}

void exchange(A &s1, B &s2)
{
    int temp=s1.data1;
    s1.data1=s2.data2;
    s2.data2=temp; 
}

void display(A s1)
{
    cout<<"The value of Data1 after exchange: "<<s1.data1<<endl;
}

void display(B s2)
{
    cout<<"The value of Data2 after exchange: "<<s2.data2<<endl;
}



int main()
{
    A o1;
    o1.SetData(5);

    B o2;
    o2.SetData(8);

    o1.getData1();
    o2.getData2();
    cout<<endl;

    exchange(o1,o2);

    
    display(o1);
    display(o2);

    return 0;

}






