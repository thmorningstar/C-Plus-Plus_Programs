#include<iostream>
using namespace std;

int count= 0;
int counter= 0;

class ShopItem
{
    int IteamId[100];
    float IteamPrice[100];

    public:
        void setData(int size);
        void getData(int size);
};

void ShopItem :: setData(int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<"Enter the code of iteam no. "<<count+1<<" is "<<endl;
        cin>>IteamId[i];
        cout<<"Enter the price of iteam no. "<<count+1<<" is "<<endl;
        cin>>IteamPrice[i];
        count++;
    }
}

void ShopItem :: getData(int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<"The price of iteam no. "<<counter+1<<" is Rupees "<<IteamPrice[i]<<endl;
        counter++;
    }
}

int main()
{
    int size;
    cout<<"Enter the total no. of items:"<<endl;
    cin>>size;

    ShopItem *S= new ShopItem[size];
    ShopItem *ptr=S;

    for(int i=0; i<size; i++)
    {
        S->setData(size);
        S++;
    }

    for(int i=0; i<size; i++)
    {
        ptr->getData(size);
        ptr++;
    }

    return 0;
}