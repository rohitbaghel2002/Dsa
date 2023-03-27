#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int a1[n1], a2[n2];
    for (int i = 0; i < n1; i++)
    {
        /* code */
        cin >> a1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        /* code */
        cin >> a2[i];
    }
    set<int> set;
    for (int i = 0; i < n1; i++)
    {
        /* code */
        set.insert(a1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        /* code */
        set.insert(a2[i]);
    }
    vector<int> v;
    for (auto it : set)
    {
        v.push_back(it);
    }
    for (auto it : v)
    {
        cout << it << " ";
    }
}