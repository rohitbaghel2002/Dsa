#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr, ans;
    int a;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a;
        arr.push_back(a);
    }
    /* brute force
      for (int i = 0; i < n; i++)
      {

          bool leader = true;
          for (int j = 0; j < n; j++)
          {
              if (arr[j] > arr[i])
              {
                  leader = false;
                  break;
              }
          }
          if (leader == true)
          {
              ans.push_back(arr[i]);
          }
      }*/
    for (int i = n - 2; i >= 0; i--)
    {
        /* code */
        if (arr[i] > maxi)
        {
            ans.push_back(arr[i]);
        }
        maxi = max(maxi, arr[i]);
    }
    sort(ans.begin(), ans.end());

    for (auto it : ans)
    {

        cout << it << " ";
    }
}