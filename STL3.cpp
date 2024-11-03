/* LIST IN STL */

#include<iostream>
#include<list>
using namespace std;

void display(list<int> &listt)
{
    list<int> :: iterator iter;
    iter = listt.begin();

    for(iter=listt.begin();iter!= listt.end(); iter++)
    {
        cout<<*iter<<" ";
    }

    cout<<endl;
}


int main()
{
    list<int> list1;  // Zero length list

    list1.push_back(35);
    list1.push_back(10);
    list1.push_back(17);
    list1.push_back(40);
    list1.push_back(25);

    //Display elements Maually
    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<<*iter<<" ";
    // iter ++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    cout<<"Elements of list1:"<<endl;
    display(list1);
    cout<<"List1 after reversing:"<<endl;
    list1.reverse();
    display(list1);

    // Sorting list1
    cout<<"List1 after sorting:"<<endl;
    list1.sort();
    display(list1);
    cout<<"Removing last element from the list:"<<endl;
    // list1.pop_back();
    // display(list1);
    cout<<"Removing first element from the list:"<<endl;
    // list1.pop_front();
    // display(list1);
    cout<<"Removing middle element from the list:"<<endl;
    // list1.remove(25);
    // display(list1);


    list<int> list2(5);  // Empty list of size 4
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 30;
    iter++;
    *iter = 35;
    iter++;
    *iter = 37;
    iter++;
    *iter = 45;
    iter++;
    *iter = 55;
    iter++;
    cout<<"Elements of list2:"<<endl;
    display(list2);
    // cout<<"Removing last element from the list:"<<endl;
    // list2.pop_back();
    // display(list2);
    // cout<<"Removing first element from the list:"<<endl;
    // list2.pop_front();
    // display(list2);
    // cout<<"Removing middle element from the list:"<<endl;
    // list2.remove(35);
    // display(list2);

    //Reversing List2
    cout<<"List2 after reversing:"<<endl;
    list2.reverse();
    display(list2);

    //Sorting List2
    cout<<"List2 after sorting:"<<endl;
    list2.sort();
    display(list2);

    //Merging List1 with List2
    list1.merge(list2);
    cout<<"Sorted List 1 after merging:"<<endl;
    display(list1);
    return 0;
}