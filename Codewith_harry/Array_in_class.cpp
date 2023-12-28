#include<iostream>
using namespace std;

class Shop
{
    int iteamId[100];
    int iteamPrice[100];
    int counter;

    public:
    void initCounter();
    void setPrice();
    void displayPrice();
};

void Shop::initCounter()
{
    counter=0;
}

void Shop ::setPrice()
{
    cout<<"Enter Id of your Iteam no:"<<counter +1<<endl;
    cin>>iteamId[counter];

    cout<<"Enter price of the Iteam:"<<endl;
    cin>>iteamPrice[counter];
    counter ++;
}

void Shop::displayPrice()
{
    int i;
    for(i=0;i<counter;i++)
    {
        cout<<"Price of Iteam with id no."<<iteamId[i] <<" is "<<iteamPrice[i]<<endl;
    }
}

int main()
{
    Shop s,p;
    s.initCounter();

    int i;
    for(i=0;i<2;i++)
    {
        s.setPrice();
    }

    s.displayPrice();

    cout<<endl;

    p.initCounter();

    for(i=0;i<2;i++)
    {
        p.setPrice();
    }

    p.displayPrice();

}