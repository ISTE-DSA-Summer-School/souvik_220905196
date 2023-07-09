#include <iostream>
#include <string> 
#include <cstring>

using namespace std;

int main()
{
	string str, wd;
    int i,l,j,k,index=-1;
    string temp,temp1,m;
    

    cout << "enter the string  :";
    getline(cin, str);
     l=str.length();
    
    for (int i = 0; i < str.length(); i++) {
 
        if (str.find(str[i], str.find(str[i]) + 1) == string::npos) {
            cout << "First non-repeating character is " << str[i];
            return 0;
        }
    }
    cout << "All repeating";
    return 0;

}