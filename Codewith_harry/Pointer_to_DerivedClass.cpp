/*Run- Time Polymorphism 
Pointer to Derived Class*/

#include<iostream>
using namespace std;

class Base
{
        public:
        int Base_Data;
        void getData()
        {
            cout<<"Data of the Base class is "<<Base_Data<<endl;
        }
};

class Derived: public Base
{
    public:
        int Derived_Data;
        void getData()
        {
            cout<<"Data of the Base class is "<<Base_Data<<endl;
            cout<<"Data of the Derived class is "<<Derived_Data<<endl;
        }
};

int main()
{
    Base *Bptr;
    Base B;
    Derived D;
    //Bptr=&B; "Base Class pointer points to Base Class object"  
    Bptr->Base_Data = 100;
    Bptr->getData();
    Bptr = &D; //"Base Class pointer can also points Derived Class object" 
    Bptr->Base_Data=200;
    Bptr->getData();
    //Bptr->Derived_Data=300; This will through Error 
    Derived *Dptr = &D;
    Dptr->Derived_Data = 300;
    Dptr->getData();
    return 0;
}