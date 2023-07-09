#include <iostream>  
using namespace std;  
  
int main ()  
{  
    int a[50], n, temp, i, j;  
    cout << "enter the length of array: ";  
    cin >> n;  
      cout << "enter array elements:  ";
    
    for (i = 0; i < n; i++)  
    {  
     
        cin >> a[i];  
    }  
      
      
    for ( i = 0 ; i < n; i++){
    for( j = 0; i < n-1; j++)
    {
         temp = a[j];  
        a[j] = a[j+1];  
        a[j+1] = temp;  
    }
      
     
    cout << "\nsorted array (bubble sort): " << endl;  
     
    for ( i = 0; i < n; i++)  
    {  
        cout << a[j] ;  
    }  
    return 0;  
}  
}