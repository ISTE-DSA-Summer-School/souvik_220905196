#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str,str2;
    int i,temp,l;

    

    cout << "enter the string  :";
    getline(cin, str);
    
   
   l = str.length();
   
    for ( i = 0; i < l; i++)
    {
        if (str[i]>90)
        {
           str[i]= str[i]-32;/* code */
        }
    }
    cout<<str;     
       
    }
    
    