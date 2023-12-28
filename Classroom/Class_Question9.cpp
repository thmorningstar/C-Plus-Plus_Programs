/* Initialize an inter array in a constructor and perform the BubbleSort and InsertionSort
in two different function*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Sorting
{ 
    int n;
    int i;
    int *array;

        public:
            Sorting();
            void printArray();
            void BubbleSort();
            void InsertionSort();
};

Sorting :: Sorting()
{
    cout<<"Enter the no. of element of Array you want to enter:"<<endl;
    cin>>n;
    array=(int*) malloc(n*sizeof(int));
    cout<<"Enter the elements of Array are:"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }

}

void Sorting :: printArray()
{
    for(i=0; i<n; i++)
    {
        cout<<"Array Element "<<i+1<<" : "<<array[i]<<endl;
    }

    cout<<endl;
}

void Sorting :: BubbleSort()
{
    {
        int i,j,temp;
        int isSorted=0;
        for(i=0;i<n-1;i++)
        {
            cout<<"Working on pass number "<<i+1<<endl;
            cout<<endl;
            isSorted=1;
            for(j=0;j<n-1-i;j++)
            {
                if(array[j]>array[j+1])
                {
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                    isSorted=0;
                }
                
            }
        
                 if(isSorted==1)
                {
                    return;
                }
        }

    }

}

void Sorting :: InsertionSort()
{
    int key, j;

    for (int i = 0; i<n-1; i++)
    {
        key = array[i];
        j = i - 1;

        // loop for each pass(total 'n-1' Passes)
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }

}

int main()
{
    Sorting S;
    S.printArray();
    S.BubbleSort();
    cout<<"Array Element after Bubble Sort:"<<endl;
    S.printArray();

    Sorting SS;
    SS.printArray();
    SS.InsertionSort();
    cout<<"Array Element after Insertion Sort:"<<endl;
    S.printArray();

    return 0;
}