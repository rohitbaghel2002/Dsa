#include <bits/stdc++.h>
using namespace std;

/*   by using brute force

int dup_element(int arr[], int n)
{
    set<int> set;
    for (int i = 0; i < n; i++)
    {
        set.insert(arr[i]);
    }
    int k = set.size();
    int j = 0;
    for (int x : set)
    {
        arr[j++] = x;
    }
    return k;
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
    int k = dup_element(arr, n);
    cout << "The array after removing duplicate elements is " << endl;
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
}*/

/*by using optimal formula*/
int optimal_sol(int arr[], int n)
{
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[j] != arr[i])
        {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;
}
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
    int sol = optimal_sol(arr, n);
    cout << "The Result" << endl;
    for (int i = 0; i < sol; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
}