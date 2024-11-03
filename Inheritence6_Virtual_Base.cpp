//VIRTUAL BASE

#include<iostream>
using namespace std;

class Student
{
    protected:
        int Rollno;
    public:
        void setRollno()
        {
            int r;
            cout<<"Please Enter the The roll no. of the student: "<<endl;
            cin>>r;
            Rollno = r;
        }

        void getRollno()
        {
             cout<<"Roll no. of the student is "<<Rollno<<endl;
        }
};

class Test : public virtual Student
{
    protected:
        float marks[5];
    public:
        int count=201;
        void setMarks()
        {
            for(int i=0; i<5; i++)
            {
                cout<<"Enter the marks of subject code BC-"<<count<<" is"<<endl;
                cin>>marks[i];
                count++;
            }

        }

        void getMarks()
        {
            int count=200;
            for(int i; i<5; i++)
            {
                cout<<"\n The marks of the subject code BC-"<<count<<" is"<<marks[i]<<endl;
            }
        }

        int sumMarks()
        {
            int sum=0;

            for(int i=0; i<5; i++)
            {
                sum=sum + marks[i];
            }

            return sum;
        }
};

class Sports : public virtual Student
{
    protected:
        int score;
    public:
        void setScore()
        {
            int s;
            cout<<"Enter the score of PT: "<<endl;
            cin>>s;
            score=s;
        }
        void getScore()
        {
            cout<<"Score obtained in subject PT: "<<score<<endl;
        }
};

class Result : public Test , public Sports
{
    protected:
        int Tmarks;

    public:
        void Display()
        {
            setRollno();
            setMarks();
            setScore();

            Tmarks = sumMarks() + score;
            cout<<"Overall marks obtainted out of 600 is "<<Tmarks<<endl;

        }
};


int main()
{
    Result R;
    R.Display();

    return 0;

}