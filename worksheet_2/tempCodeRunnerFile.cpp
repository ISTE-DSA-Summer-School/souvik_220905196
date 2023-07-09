#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int i,temp,l;
    

    cout << "enter the string  :";
    getline(cin, str);
   
   l = str.length();
   
    for ( i = 0; i < l/2; i++)
    {
        temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
       
    }
    
    

    cout << str;
    }