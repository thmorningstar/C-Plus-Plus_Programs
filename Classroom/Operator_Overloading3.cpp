/*In Binary Operator case*/

#include<iostream>
using namespace std;

class Operator_Addition
{
    public:
        int x,y;
        Operator_Addition()
        {}
        Operator_Addition(int, int);
        Operator_Addition operator+(Operator_Addition);
};

Operator_Addition::Operator_Addition(int i, int j)
{
    x=i;
    y=j;

}

Operator_Addition Operator_Addition :: operator+(Operator_Addition obj2)
{
            Operator_Addition res;
            res.x= x+obj2.x;
            res.y= y+obj2.y;

            return res;
}





int main()
{

    Operator_Addition obj1(10,20),obj2(30,40),obj3;

    obj3=obj1+obj2;

    cout<<"+ operartor overloading X+X= "<<obj3.x<<endl;    
    cout<<"+ operartor overloading Y+Y= "<<obj3.y<<endl;    

    return 0;
}