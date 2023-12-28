/*Deafult Inline function And  Explicit Function*/

#include<iostream>
using namespace std;

class Default_Inline
{
    public:
    void show()
    {
        cout<<"It's an Default inline function"<<endl;
    }
};

class Explicit_Inline
{
    public:
        inline void show();
};

inline void Explicit_Inline :: show()
{
     cout<<"It's an Explicit inline function"<<endl;
}

int main()
{
    Default_Inline D;
    D.show();

    Explicit_Inline E;
    E.show();
    return 0;
}

