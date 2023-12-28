/*Define an Inline function which return area of a circle,it takes radius as parameter*/

#include<iostream>
#include<cmath>
using namespace std;

class AreaCircle
{
    int radius;

    public :
        void setRadius(int n);
        inline int area(int rad );
};

void AreaCircle ::setRadius(int n)
{
    radius=n;
}

inline int AreaCircle :: area(int rad)
{
    int area= 3.14 * pow(rad,2);

    return area;
}

int main()
{
    int r;
    AreaCircle A;
    
    cout<<"Enter the radius of the circle:"<<endl;
    cin>>r;
    A.setRadius(r);
    A.area(r);
    cout<<"Area of the Circle is "<< A.area(r);

    return 0;

}


