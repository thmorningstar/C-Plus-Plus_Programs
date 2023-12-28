#include<iostream>
using namespace std;

class Employee
{
    int Id;
    static int count;
    public:
        void setData()
        {
            cout<<"Enter the employee's Id: "<<endl;
            cin>>Id;
            cout<<endl;
            count ++;
        }

        void getData()
        {
            cout<<"Employee No: "<<count <<" And its ID No: "<<Id<<endl;
        }

        //static function in the Class

        static void getCount()
        {
            cout<<"The value of Count is "<<count<<endl;
        }

    
};



int Employee :: count; //Default count=0

int main()
{
    Employee emp1,emp2;
    int i;
    for(i=0;i<2;i++)
    {
        emp1.setData();
        emp1.getData();
        Employee::getCount();
        cout<<endl;
    }

    for(i=0;i<2;i++)
    {
        emp2.setData();
        emp2.getData();
        Employee::getCount();

    }

    return 0;
}