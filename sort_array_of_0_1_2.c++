#include <bits/stdc++.h>
using namespace std;
/*
int better_sol(int n, int a[])
{
    int i;
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;
    for (i = 0; i < n; i++)
    {

if (a[i] == 0)
    count_0++;
else if (a[i] == 1)
    count_1++;
else
    count_2++;
}

for (i = 0; i < count_0; i++)
    a[i] = 0;
for (i = count_0; i < count_0 + count_1; i++)
    a[i] = 1;
for (i = count_0 + count_1; i < n; i++)
    a[i] = 2;

return a[i];
}
*/
int optimal_sol(int n, int a[])
{

    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << a[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    /*  better_sol(n, a);*/
    optimal_sol(n, a);
}