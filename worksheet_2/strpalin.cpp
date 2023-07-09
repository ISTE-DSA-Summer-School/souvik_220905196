#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str,str2;
    int i,temp,l;

    

    cout << "enter the string  :";
    getline(cin, str);
   str2=str;
   l = str.length();
   
    for ( i = 0; i < l/2; i++)
    {
        temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
       
    }
    
    if (str==str2)
    {
       cout<< "palindrome"; /* code */
    }
    else
    {
        cout<<"not";
    }
    
    

    }