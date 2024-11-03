#include<iostream>
using namespace std;

class Employee
{
    int Id;
    int Salary;

    public:

    // int Id;
    // int Salary;


    void set_Id_Salary()
    {
        cout<<"Enter the employee's Id and Salary"<<endl;
        cin>>Id>>Salary;
    }

    void getData()
    {
        cout<<"The employee's Id is "<<Id <<" and its salary is "<<Salary<<endl;
    }
};

int main()
{
    int i;
   // Employee Rohan,Aditya,Kaushal,Ankita;
    Employee FBI[5];

    for(i=0;i<5;i++)
    {
        FBI[i].set_Id_Salary();
        FBI[i].getData();

        cout<<endl;
    }

    //Alternative Method

    // for(i=0;i<5;i++)
    // {
    //     cout<<"Enter the Employee Id: "<<endl;
    //     cin>>FBI[i].Id;
    //     cout<<"Enter the salary:"<<endl;
    //     cin>>FBI[i].Salary;

    // //     cout<<"The employee's Id is "<<FBI[i].Id <<" and its salary is "<<FBI[i].Salary<<endl;
    // }

    return 0;

}