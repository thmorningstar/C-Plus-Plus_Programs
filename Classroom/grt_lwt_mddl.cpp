#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0,max=0,smax=0,tmax=0;
    cout<<"enter three nos"<<endl;
    cin>>a>>b>>c;
    if(a>=b && a>=c)
     {
      max=a;
       if(b>c)
       {
        smax=b;
        tmax=c;
       }
      else
      {
       smax=c;
       tmax=b;
      }
    }
   if(b>=a && b>=c)
     {
       max=b;
       if(a>c)
       {
        smax=a;
        tmax=c;
      }
      else
      {
       smax=c;
       tmax=a;
      }
    }
   if(c>=b && c>=a)
     {
      max=c;
       if(a>b)
       {
        smax=a;
        tmax=b;
      }
      else
      {
       smax=b;
       tmax=a;
      }
    }
  cout<<"largest no "<<max<<endl; 
  cout<<"middle no "<<smax<<endl; 
  cout<<"smaller no "<<tmax<<endl;

  return 0; 
}