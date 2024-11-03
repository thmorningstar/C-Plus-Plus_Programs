/*Member Function Templates & Overloading Template Functions*/

#include<iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};
 
template <class T>                          
void Harry<T> :: display(){                         //Member Functtion Template
    cout<<data<<endl;
}
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
                                                    //OverLoading Function Func()
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
int main()
{
    Harry<float> h(5.7);
    h.display();
    func(4);  //Exact match takes the highest priority
    return 0;
}
