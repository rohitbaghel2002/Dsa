#include <bits/stdc++.h>
using namespace std;
/*
int better_sol(vector<int> v)
{
    map<int, int> mpp;
    for (int i = 0; i < v.size(); i++)
    {
        mpp[v[i]]++;
    }


    Iterating in the map


for (auto it : mpp)
{
    if (it.second > (v.size() / 2))
    {
        cout << it.first;
    }
}

return -1;
}
*/
int optimal_sol(vector<int> v)
{

    // size of the given array:
    int n = v.size();
    int cnt = 0; // count
    int el;      // Element

    // applying the algorithm:
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            el = v[i];
        }
        else if (el == v[i])
            cnt++;
        else
            cnt--;
    }

    // checking if the stored element
    //  is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == el)
            cnt1++;
    }

    if (cnt1 > (n / 2))
        return el;
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        v.push_back(c);
    }
    /* better_sol(v);*/
    int ans = optimal_sol(v);
    cout << ans;
}
