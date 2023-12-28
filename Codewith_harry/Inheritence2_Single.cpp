// Derived Class as a PUBLIC:

// #include<iostream>
// using namespace std;

// class Base
// {
//     int Data1;
//         public:
//             int Data2;
//             void setData();
//             int getData1();
//             int getData2();
// };

// void Base :: setData()
// {
//     Data1=10;
//     Data2=20;
// }

// int Base :: getData1()
// {
//     return Data1;
// }

// int Base :: getData2()
// {
//     return Data2;
// }

// class Derived : public Base
// {
//     int Data3;
//         public:
//             void Process();
//             void Display();
// };

// void Derived :: Process()
// {
//     Data3 = Data2 * getData1();
// }

// void Derived :: Display()
// {
//     cout<<"Value of Data1="<<getData1()<<endl;
//     cout<<"Value of Data2="<<Data2<<endl;
//     cout<<"Value of Data3="<<Data3<<endl;
// } 
// int main()
// {
//     Derived D;
//     D.setData();
//     D.Process();
//     D.Display();
//     return 0;
// }


//Derived Class as a PRIVATE:

#include<iostream>
using namespace std;

class Base
{
    int Data1;
        public:
            int Data2;
            void setData();
            int getData1();
            int getData2();
};

void Base :: setData()
{
    Data1=10;
    Data2=20;
}

int Base :: getData1()
{
    return Data1;
}

int Base :: getData2()
{
    return Data2;
}

class Derived : private Base
{
    int Data3;
        public:
            void Process();
            void Display();
};

void Derived :: Process()
{
    setData();
    Data3 = Data2 * getData1();
}

void Derived :: Display()
{
    cout<<"Value of Data1="<<getData1()<<endl;
    cout<<"Value of Data2="<<Data2<<endl;
    cout<<"Value of Data3="<<Data3<<endl;
} 
int main()
{
    Derived D;
    D.Process();
    D.Display();
    return 0;
}