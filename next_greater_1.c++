class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
           map<int,int> mp;

        stack<int> st;

        for(int i=0;i<nums2.size();i++)

        {

            if(st.empty()||st.top()>nums2[i])

            {

                st.push(nums2[i]);

                mp[nums2[i]]=-1;

            }

            else{

                mp[st.top()]=nums2[i];

                st.pop();

                i--;

            }

        }

        vector<int> ans(nums1.size());

        for(int i=0;i<nums1.size();i++)

        {

            ans[i]=mp[nums1[i]];

        }

        return ans;
    }
};