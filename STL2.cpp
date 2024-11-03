/* VECTOR IN STL */

#include<iostream>
#include<vector>
using namespace std;

template<class T>
void display(vector<T> &v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";  
    }

    cout<<endl;
}


int main()
{
    //ways to create Vector:
    vector <int> vec1;   // Zero length inerger vector
    vec1.push_back(10);
    vector <char> vec2(4); // 4-element character vector
    vec2.push_back('A');
    vec2.push_back('B');
    vec2.push_back('C');
    vec2.push_back('D');
    vector <char> vec3(vec2);// 4-element character vector from vec2
    vector <int> vec4(6,3); // 6-element integer vector of 3s
    int i,size=5,element;


    display(vec1);
    display(vec2);
    display(vec3);
    display(vec4);
   
    return 0;
}