#include<iostream>
using namespace std;

int main()
{
    int a=4;
    int* ptr = &a;
    cout<<"The value of a is "<< *(ptr)<<endl;

    //"new" operator for Dynamic allocation of memory

    int* p = new int(40);
    cout<<"The value at address ptr is "<< *(p)<<endl;

    //Dynamic memory allocation of Array

    int* array = new int[5];
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;
    array[4] = 50;
    cout<<"The value of array[0] is "<<array[0]<<endl;
    cout<<"The value of array[1] is "<<array[1]<<endl;
    cout<<"The value of array[2] is "<<array[2]<<endl;
    cout<<"The value of array[4] is "<<array[3]<<endl;

    // Delete operator

    int* arry = new int[5];
    arry[0] = 10;
    //arry[1] = 20;
    *(arry+1) = 20;
    arry[2] = 30;
    //delete[] arry;
    cout<<"\nThe value of array[0] is "<<arry[0]<<endl;
    cout<<"The value of array[1] is "<<arry[1]<<endl;
    cout<<"The value of array[2] is "<<arry[2]<<endl;

    return 0;
}