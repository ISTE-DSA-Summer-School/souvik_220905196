#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str,str2;
    char source[10]="souvik";
    char destin[10];
   
strcpy(destin,source);
    cout << "enter the string 1 :";
 getline(cin,str);
 cout << "enter the string 2 :";
 getline(cin,str2);
 int l= str.size();
 
 
 bool k=str.compare(str2);
 string s1= str.substr(7,7);
 string s2= str.replace(7,7, " "+str);
 cout<< l << "\n" << destin << "\n" << k << "\n" << s1 << "\n" << s2;


 
}