#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int *x,*y,*z;
    x=&a;
    y=&b;
    z=&c;
    cout<<"enter the nos. : ";
    cin>>a>>b>>c;
    if(*x>*y)
    {
        if(*x>*z)
        {
            cout<<"largest no. is "<<*x;
        }
        else
        {
            cout<<"largest no. is "<<*z;
        }
    }
    else
    {
        if(*y>*z)
        {
            cout<<"largest no. is "<<*y;
        }
        else
        {
            cout<<"largest no. is "<<*z;
        }

    }
  

}
