#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << arr[n - 2] << " ";
}