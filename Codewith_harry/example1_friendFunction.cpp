#include<iostream>
using namespace std;

class B;
class A
{
    int data;

    public:
        void SetData(int x);

    friend void sumData(A,B);
};


class B
{
    int data;

    public:
        void SetData(int x);

    friend void sumData(A,B);
};

void A :: SetData(int num)
{
    data=num;
}

void B :: SetData(int num)
{
    data=num;
}

void sumData(A s1, B s2)
{
    cout<<"The Sum of the data A and B gives: "<<s1.data + s2.data<<endl; 
}

int main()
{
    A o1;
    o1.SetData(5);

    B o2;
    o2.SetData(8);

    sumData(o1,o2);

    return 0;

}






