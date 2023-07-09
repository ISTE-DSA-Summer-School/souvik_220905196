#include<iostream>
using namespace std;
int main (){
int i,j;
string k;
{
 cout<<"enter the 1st number";
 cin>>i;
 cout<<"enter the 2nd number";
 cin>>j;
  cout<<"enter what you want to perform";
  cin>>k;
  if (k=="add")
  {
    cout<< i+j;

  }
  else if(k=="sub")
  {
    cout<< i-j;
  }
  else if(k=="multiply")
  {
    cout<< i*j;
  }
  else if(k=="devide")
  {
    cout<< i/j;
  }
  
}
}



