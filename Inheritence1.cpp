#include<iostream>
using namespace std;

//Base class
class Employee
{
    float Salary;
        public:
        int Id;
        Employee(int inpId)
        {
            Id=inpId;
            Salary=35000.00;
        }

        void print()
        {
            cout<<"Id: "<<Id<<endl;
            cout<<"Salary: "<<Salary<<endl;
        }

        Employee()          //Default Constructor
        {}
};

/*Derive class syntax
class{{derive-class-name}} : {{visibility-mode}} : {{base-class-name}}
{
    class members/methods/etc...
}

--> Default Visibility Mode is PRIVATE
--> Public Visibility Mode: Public Members of the Base class
     become Public of the Derive class 
--> Private Visibility Mode: Public Members of the Base class
     become Private of the Base class
--> Private members are never inherited 
*/

//Creating "Programmer" Derive class from Base program "Employee"

//class Programmer : Employee   (By deafault PRIVATE)
class Programmer : public Employee
{
    public:
        int languageId;
        Programmer(int inpId)
        {
            Id = inpId;
            languageId = 9;
        }
        
        // void printData()
        // {
        //     cout<<"Id of Programmer: "<<Id<<endl;
        //     cout<<"Language Id of Programmer: "<<languageId<<endl;
        // }

};

int main()
{
    Employee suraj(10),rohan(11);
    suraj.print(),rohan.print();

    Programmer aditya(12),adarsh(13);
    cout<<"Id:"<<aditya.Id<<endl;
    cout<<"Id:"<<adarsh.Id<<endl;
    cout<<"LangId:"<<adarsh.languageId<<endl;       //--> When Derive class is "Public"
    cout<<"LangId:"<<adarsh.languageId<<endl;       //--> When Derive class is "Public"
    // aditya.printData();          --> when Derive class is "Private"
    // adarsh.printData();          --> when Derive class is "Private"

    return 0;
}