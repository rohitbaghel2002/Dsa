#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    for (int i = 0; i < n; i = i + 2)
    {
        /* code */ if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i];
    }
}