#include<iostream>
using namespace std;

class Student
{
    protected:
        int Rollno;
    public:
        void setRollno();
        void getRollno();
};

void Student :: setRollno()
{
    int r;
    cout<<"Please Enter the The roll no. of the student: "<<endl;
    cin>>r;
    Rollno = r;
}

void Student :: getRollno()
{
    cout<<"Roll no. of the student is "<<Rollno<<endl;
}

class Exam : public Student
{
    protected:
        float marks[5];
    public:
        int count=201;
        void setMarks();
        void getMarks();
};

void Exam :: setMarks()
{
    for(int i=0; i<5; i++)
    {
        cout<<"Enter the marks of subject code BC-"<<count<<" is"<<endl;
        cin>>marks[i];
        count++;
    }
}

void Exam :: getMarks()
{
    int count=200;
    for(int i; i<5; i++)
    {
        cout<<"\n The marks of the subject code BC-"<<count<<" is"<<marks[i]<<endl;
    }
}

class Result : public Exam
{
    public:
        int calResult();
        void displayResult();
};

int Result :: calResult()
{
    int perc=0;
    for(int i=0; i<5; i++)
    {
        perc= perc+marks[i];
    }

    return perc/5;
}

void Result :: displayResult()
{
    cout<<"\nTotal percentage of Rollno-"<<Rollno<<" is "<<calResult()<<"%"<<endl;
}

int main()
{
    Result R;
    R.setRollno();
    R.setMarks();
    R.displayResult();
    return 0;
}