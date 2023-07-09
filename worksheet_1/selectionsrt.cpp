#include <iostream>
using namespace std;

int main()
{
    int n, a[50], j, m;
    cout << "Enter the length of array:";
    cin >> n;
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            m = a[min];
            a[min] = a[i];
            a[i] = m;
        }}


        cout << "The sorted array is:(selection sorted ascending order)" ;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        return 0;
    }