#include <bits/stdc++.h>
using namespace std;
int findAllSubarraysWithGivenSum(vector<int> &arr, int k)
{

    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        int sum = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            /* code */
            sum += arr[i];
            if (sum == k)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    vector<int> arr = {3, 1, 1, 4};
    int k = 6;
    int cnt = findAllSubarraysWithGivenSum(arr, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}