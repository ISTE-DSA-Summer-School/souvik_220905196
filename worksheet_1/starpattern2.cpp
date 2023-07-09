#include<iostream>
using namespace std;
int main (){
int i,j,k,n;
cout<<"enter the number of rows: \n";
cin>>n;
{
    for ( i = 1; i <=n; i++)
    {
      for (k = 0; k < i; k++)
        {
            cout<<" ";
        }
        for (j = n; j >= i; j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}
}