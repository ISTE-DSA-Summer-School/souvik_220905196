#include <iostream>
#include <cstring>
#include<cctype>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    string str, wd;
    int i,l,j=0;
    string temp,temp1,m;
    char max;
    

    cout << "enter the string  :";
    getline(cin, str);
   l=str.length();
    
    unordered_map<char,int>k;
     
    
     
    for(int i=0 ;i<l ; i++){
    k[str[i]]++;
         
        if(j < k[str[i]]){
            max = str[i];
            j = k[str[i]];
        }
    }
    
    vector<char> maxChars;
    for (const auto& pair : k) {
        if (pair.second == j) {
            maxChars.push_back(pair.first);
        }
    }
    
    cout << "Max occring chars : ";
    for (const auto& ch : maxChars) {
        cout << ch << " ";
    }
    

}