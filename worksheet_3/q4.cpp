#include<iostream>
using namespace std;
int main()
{
    int a,wrk=0,ld;
    int *x,*y,*z;
    x=&a;
    y=&wrk;
    z=&ld;
    cout<<"Enter number: ";
    cin>>a;
    while(*x>0)
    {
        *z=*x%10;
        *y=*y*10 + *z;
        *x=*x/10;
    }
    cout<<"Reversed number: "<<*y;
   
}