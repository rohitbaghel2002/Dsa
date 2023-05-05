#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int n, int k)
{
    int mid;
    int start = 0, end = n - 1;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (k == arr[mid])
        {
            return mid;
        }
        else if (k < arr[mid])
        {
            end = mid - 1;
        }
        else if (k > arr[mid])
        {
            start = mid + 1;
        }
    }
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int pos = binary_search(arr, n, k);
    cout << pos + 1;

    return 0;
}