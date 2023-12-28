/*Write a program in which overload plus operator and concate 2-strings*/

#include<iostream>
#include<string>
using namespace std;

class plus_overloading
{
    public:
        string str1;
        plus_overloading()
        {}
        plus_overloading(string);
        plus_overloading operator+(plus_overloading &obj2);
};

plus_overloading :: plus_overloading(string i)
{
    str1=i;
}

plus_overloading plus_overloading :: operator+(plus_overloading &obj2)
{
    plus_overloading res;
    res.str1=str1+obj2.str1;
    return res;

}

int main()
{
    string str1,str2;
    cout<<"Enter the 1st string: "<<endl;
    getline(cin,str1);
    cout<<"Enter the 2nd string: "<<endl;
    getline(cin,str2);
    plus_overloading obj1(str1),obj2(str2),obj3;

    obj3=obj1+obj2;

    cout<<"After concating, the string will be "<<obj3.str1;
    return 0;
}