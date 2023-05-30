#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        stack<int> st;
        for (int i = 0; i < asteroids.size(); i++)
        {
            // cout<<asteroids[i]<<" ";
            if (st.size() == 0)
            {
                st.push(asteroids[i]);
            }
            else if (st.top() > 0)
            {
                if (asteroids[i] > 0)
                {
                    st.push(asteroids[i]);
                }
                else
                {
                    if (abs(asteroids[i]) == abs(st.top()))
                    {
                        st.pop();
                    }
                    else if (abs(asteroids[i]) > abs(st.top()))
                    {
                        st.pop();
                        i--;
                    }
                }
            }
            else
            {
                st.push(asteroids[i]);
            }
        }
        vector<int> ans;
        // cout<<st.size()<<"\n";
        while (st.size())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    vector<int> vec = {10, 2, -5};
    Solution s;
    vector<int> ans = s.asteroidCollision(vec);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}