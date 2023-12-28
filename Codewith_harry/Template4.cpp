//Function template

#include<iostream>
using namespace std;

// float funcAverage(int a, int b){      //Without Function Template  
//     float avg= (a+b)/2.0; 
//     return avg;

template<class T1, class T2>            //With Function Template  
float funcAverage(T1 a, T2 b){
    float avg= (a+b)/2.0; 
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}


int main(){
    // float a;                                  //Called without Function Template 
    // a = funcAverage(5,2);            
    // printf("The average of these numbers is %.3f",a);

    float a;                                    //Called Function Template
    a = funcAverage(5,2.8);                             
    printf("The average of these numbers is %.2f \n",a);

    int x=5,y=10;
    swapp(x,y);
    cout<<"After swapped"<<" x="<<x
        <<" y="<<y;
    return 0;
}
