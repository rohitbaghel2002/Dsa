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
    int maxi = 0;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] == 1)
        {
            counter++;
            maxi = max(maxi, counter);
        }
        else
        {
            counter = 0;
        }
    }

    cout << maxi;
} 