#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {

        for (int j = 0; j < i; j++)
        {

            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        /* code */ cout << arr[i];
    }
}