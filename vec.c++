#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        /* code */ cin >> a;
        vec.push_back(a);
    }
    for (auto it : vec)
    {
        /* code */
        cout << it << " ";
    }
}