#include <iostream>  
using namespace std;  
  
int main ()  
{  
    int a[50], n, temp, i, j;  
    cout << "enter the length of array: ";  
    cin >> n;  
      
    
    for (i = 0; i < n; i++)  
    {  
        cout << " Enter the " << i+1 << " num : ";  
        cin >> a[i];  
    }  
      
      
    for ( i = 0 ; i < n/2; i++)  
    {     
        temp = a[i];  
        a[i] = a[n-1-i];  
        a[n-1-i] = temp;  
    }  
    cout << "\nReversed array: " << endl;  
     
    for ( i = 0; i < n; i++)  
    {  
        cout << a[i] << " ";  
    }  
    return 0;  
}  