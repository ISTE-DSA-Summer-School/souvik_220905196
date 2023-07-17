#include<iostream>
using namespace std;

int main()
{
    int a,b;
    int *x,*y;
    cout<<"Enter two integers:";
    cin>>a>>b;
    x=&a;
    y=&b;
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    cout<<"a= "<<*x<<" b= "<<*y;
    
}