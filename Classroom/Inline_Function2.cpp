#include<iostream>
using namespace std;

class InlineExample
{
    public:
        inline int square(int);
};

inline int InlineExample :: square(int n)
{
    return n*n;
}

int main()
{
    int x,res;

    cout<<"Enter the side of  the square"<<endl;
    cin>>x;

    InlineExample ie;
    res=ie.square(x);

    cout<<"Area of square is "<<res<<endl;

    return 0;

}