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
    int s = 0;
    int sum = n * (n + 1) / 2;
    for (int i = 0; i < n; i++)
    {
        /* code */
        s += arr[i];
    }
    cout << sum - s;
}
