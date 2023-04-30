#include <bits/stdc++.h>
using namespace std;
/*vector<int> Brute_force(vector<int> &v, int n)
{
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (ans.size() == 0 || ans[0] != v[i])
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (v[j] == v[i])
                {
                    count++;
                }
            }
            if (count > n / 3)
            {
                ans.push_back(v[i]);
            }
        }
        if (ans.size() == 2)
            break;
    }
    return ans;
}*/

vector<int> optimal_sol(vector<int> nums)
{

    int n = nums.size();
    int count_1 = 0, count_2 = 0;
    int el1 = INT_MIN;
    int el2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (count_1 == 0 && el2 != nums[i])
        {
            count_1 = 1;
            el1 = nums[i];
        }

        else if (count_2 == 0 && el1 != nums[i])
        {
            count_2 = 1;
            el2 = nums[i];
        }

        else if (nums[i] == el1)
            count_1++;
        else if (nums[i] == el2)
            count_2++;

        else
        {
            count_1--;
            count_2--;
        }
    }

    vector<int> ans;
    int cnt1 = 0, cnt2 = 0;
    int mini = int(n / 3) + 1;
    for (int i = 0; i < n; i++)
    {
        if (el1 == nums[i])
            cnt1++;
        if (el2 == nums[i])
            cnt2++;
    }
    if (cnt1 == mini)
        ans.push_back(el1);
    if (cnt2 == mini)
        ans.push_back(el2);

    return ans;
}

int main()
{
    vector<int> v;
    int a;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    // vector<int> ans = Brute_force(v, n);
    vector<int> ans = optimal_sol(v);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}