#include<iostream>
using namespace std;
int main()
{
    int a,i,b=1;
    int *x,*y;
    x=&a;
    y=&b;
    cout<<"enter the no. ";
    cin>>a;
    for(i=2;i<=*x;i++)
    {
        *y=*y*i;
    }
    cout<<"Factorial = "<<*y;
    
}