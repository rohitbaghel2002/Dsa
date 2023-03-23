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

    /// Precompute
    int hash[5] = {0};
    for (int i = 0; i < n; i++)
    {
        /* code */
        hash[arr[i]] += 1;
    }

    // Fetching
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
}