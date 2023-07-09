#include <iostream>
using namespace std;

int main()
{
    int a[50], n, temp, i, j, k;
    cout << "enter the length of array: ";
    cin >> n;
    cout << "enter array elements:  \n";

    for (i = 0; i < n; i++)
    {
        cout << "enter the" << i + 1 << " element :";

        cin >> a[i];
    }

    for (j = 0; j < n; j++)
    {
        for (k = 0; k < n - 1; k++)

        {
            if (a[k] > a[k + 1])
            {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
    }
    cout << "\nsorted array (bubble sort ascending order): ";

    for (i = 0; i < n; i++)
    {
        cout << "\t" << a[i];
    }
    return 0;
}
