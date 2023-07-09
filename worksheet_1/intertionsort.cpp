#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cout << "Enter the length of array:";
    cin >> n;
    cout << "Enter the elements:";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        k = a[i];
        m = i - 1;
        while (m >= 0 && a[m] > k)
        {
            a[m + 1] = a[m];
            m = m - 1;
        }
        a[m + 1] = k;
    }

    cout << "The sorted array is(insertion sort ascending order ):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}