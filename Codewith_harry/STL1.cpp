/* VECTOR IN STL */

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    for(int i=0; i<v.size(); i++)
    {
        //cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";  // Alternative method
    }

    cout<<endl;
}


int main()
{
    vector<int> vec;
    int i,size,element;

    cout<<"Enter the size of vector: "<<endl;
    cin>>size;

    for(i=0; i<size; i++)
    {
        cout<<"Enter the element to add to this vector:"<<endl;
        cin>>element;
        vec.push_back(element);
    }

    display(vec);
    //vec.pop_back();
    //display(vec);
    vector<int> :: iterator iter = vec.begin();
    vec.insert(iter,100); //iterator pointing at 1st position
    display(vec);
    vec.insert(vec.begin()+1,200); // iterator pointing at 2nd position 
    display(vec);
    vec.insert(vec.begin()+1,3,200);  //copy of Data
    display(vec);

    return 0;
}