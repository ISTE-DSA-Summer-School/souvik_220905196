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
        int sizewd=wd.size();
        if (sizewd>max)
        {
          max=sizewd; 
        }
        wd="";
        }

        else{
            wd=wd+m;
        }
    }
    cout<<"\n the length of longest word is :"<<max;
    }