#include <iostream>
#include <cstring>
#include<cctype>

using namespace std;
int main()
{
    string str, wd;
    int i,l,j,k;
    string temp,temp1,m;
    

    cout << "enter the string  :";
    getline(cin, str);
     cout << "enter the word to be searched :";
    getline(cin, temp);
 str=str+" ";
   l = str.length();
   int max=0;
   cout<<"the words in the sentence are : \n";
    for ( i = 0; i<l ; i++)
    {
       m=str[i];
      
        if (isspace(str[i]))

        {
        cout<<wd<<" \n";
        if (wd==temp)
        
        {
        max++;   
        }
            
       
        wd="";
        }

        else{
            wd=wd+m;
        }
    }
    cout<<"\n number of times the entered word appeared is :"<<max;
    }