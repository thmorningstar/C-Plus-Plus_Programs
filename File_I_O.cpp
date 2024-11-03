#include<iostream>
#include<fstream>
using namespace std;

/* 
The useful Classes for working with Files in C++ are:
1. fstreambase
2. ifstream  -->Derived from fstreambase
3. ofstream  -->Derived from fstreambase

In order to work with file in C++, you will hqave to open it. Primerly there are 2 ways
to open a File:

1. By using Constructor
2. By using member function open of the class
*/


int main(){
    // string st = "Harry bhai";
    // By using constructor
    // ofstream out("SampleFile1.txt"); // Write operation
    // out<<st;

    string st2;
    // By using constructor
    ifstream in("SampleFile2.txt"); // Read operation
    //in>>st2;
    getline(in, st2);  
    cout<<st2;

    return 0;
}

