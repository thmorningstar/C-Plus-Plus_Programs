/*Class A have an integer Array and Class B have methods which return class A.
In this method input the values in interger Array and return the sorted Array
using Insertion Sort*/

#include<iostream>
using namespace std;

class B;
class A
{
    public:
        int array[10];
};

class B
{
    public:
        A getArray(A &);
        int* insertionSort(A &obj);
        void display(A &);
};

 A B :: getArray(A &obj2)
{
    cout<<"Enter the elemets of Array:"<<endl;

    for(int i=0; i<10; i++)
    {
        cin>>obj2.array[i];
    }
}

int* B :: insertionSort(A &obj)
{
        int key, j;
        // A a;

    for (int i = 0; i<10-1; i++)
    {
        key = obj.array[i];
        j = i - 1;

        // loop for each pass(total 'n-1' Passes)
        while (j >= 0 && obj.array[j] > key)
        {
            obj.array[j + 1] = obj.array[j];
            j--;
        }
            obj.array[j + 1] = key;
    }

    return obj.array;

}

void B :: display(A &obj2)
{
    // A retn;
    cout<<"Elements of Array are: "<<endl;
    for(int k=0; k<10; k++)
    {
        cout<<" "<<obj2.array[k];
    }
}

int main()
{
    A a,b;
    B obj;
    a=obj.getArray(b);
    obj.insertionSort(b);
    obj.display(b);

    
    return 0;
}