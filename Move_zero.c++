#include <bits/stdc++.h>
using namespace std;
vector<int> moveZero(int n, vector<int> a)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i] != 0)
            temp.push_back(a[i]);
    }
    int nz = temp.size();
    for (int i = 0; i < nz; i++)
    {
        /* code */
        a[i] = temp[i];
    }
    for (int i = nz; i < n; i++)
    {
        /* code */
        a[i] = 0;
    }
    for (auto it : a)
    {
        /* code */
        cout << it << " ";
    }
}
int main()
{
    int n, b;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> b;
        a.push_back(b);
    }
    moveZero(n, a);
}