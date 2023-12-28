#include<iostream>
using namespace std;
class Complex
{
    int real,imaginary;

    public:
        void setData(int x, int y)
        {
            real=x;
            imaginary=y;
        }
        void getData()
        {
            cout<<"The real number is "<<real<<endl;
            cout<<"The imaginary number is "<<imaginary<<endl;
        }
};
int main()
{
    //Complex C;
    // C.setData(10,20);            //method-1    
    // C.getData();

    //Complex *ptr = new Complex;
    // (*ptr).setData(10,20);
    // (*ptr).getData();                   //method-2
    //using Arrow operator as well
    // ptr->setData(10,20);
    // ptr->getData();

    Complex C1;
    Complex *ptr=&C1;
    // (*ptr).setData(10,20);           //method-3
    // (*ptr).getData();
    ptr->setData(10,20);
    ptr->getData();

    return 0;
}