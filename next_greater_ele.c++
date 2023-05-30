#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    vector<int> nge(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> nge(n, -1);
        stack<int> st;
        for (int i = 2 * n - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top() <= nums[i % n])
            {
                st.pop();
            }
            if (i < n)
            {
                if (!st.empty())

                    nge[i] = st.top();
            }
            st.push(nums[i % n]);
        }
        
    return nge;
}
}
;
int main()
{
    vector<int> vec = {1, 2, 1};
    solution s;
    vector<int> ans = s.nge(vec);
    for (auto it : ans)
        cout << it << " ";
}