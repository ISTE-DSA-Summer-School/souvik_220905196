#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str,str1,str2;char temp;
    int x,y,temp1,temp2,l,ls1,ls2,i;
    

    cout << "enter the string  :";
    getline(cin, str);
   
   l = str.length();
   str1=str.substr((l/2) );
   str2=str.substr(0,l/2);

    cout << str <<"\n"<< str1<<"\n"<<str2<<"\n";
    





    ls1 = str1.length();
   
    for ( i = 0; i < ls1/2; i++)
    {
        temp=str1[i];
        str1[i]=str1[ls1-i-1];
        str1[ls1-i-1]=temp;
       
    }
    
    

   

    ls2 = str2.length();
   
    for ( i = 0; i < ls2/2; i++)
    {
        temp=str2[i];
        str2[i]=str2[ls2-i-1];
        str2[ls2-i-1]=temp;
       
    }
    
    
 cout << "\n"<<str2+str1;
    
    }
    
