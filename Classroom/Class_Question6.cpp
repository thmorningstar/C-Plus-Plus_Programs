/* Declare two strings in two different class and take input string from the user and
 compare them, it is same or not*/

#include<iostream>
#include<string>
using namespace std;

class string1
{
    string str1;

    public:
        string printstr1();
};

string string1 :: printstr1()
{
    cout<<"Enter the string1"<<endl;
    cin>>str1;

    cout<<"Entered String is "<<str1<<endl;
    return str1;

}

class string2
{
    string str2;

    public:
        string printstr2();
};

string string2 :: printstr2()
{
    cout<<"Enter the string2"<<endl;
    cin>>str2;

    cout<<"Entered String is "<<str2<<endl;
    return str2;

}

int main()
{
    string1 s1;
    string s3=s1.printstr1();

    string2 s2;
    string s4= s2.printstr2();

    int val =  s3.compare(s4);
  
  if (val == 0)
  {
      cout <<" The string mathches" << endl;
  }
  else{
      cout <<"Does not matches" <<endl;
  }





    return 0;
}