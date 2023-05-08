#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[5] = {4, 5, 1, 2, 3};

    int left = 0, right = 4, mini = INT_MAX;
    while (left <= right)
    {
        if (nums[left] < nums[right])
        {
            mini = min(mini, nums[left]);
            break;
        }
        int mid = (left + right) / 2;
        if (nums[left] <= nums[mid])
        {
            mini = min(mini, nums[left]);
            left = mid + 1;
        }
        else
        {
            mini = min(mini, nums[mid]);
            right = mid - 1;
        }
    }
    cout << mini;
    return mini;
}