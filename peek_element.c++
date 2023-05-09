int start = 0, end = n - 1;
int n=nums.size();
while (start < end)
{
    int mid = (start + end) / 2;

    if (mid == 0)
        return nums[0] >= nums[1] ? nums[0] : nums[1];

    if (mid == n - 1)
        return nums[n - 1] >= nums[n - 2] ? nums[n - 1] : nums[n - 2];

    // Cheking whether peak ele is in mid position
    if (nums[mid] >= nums[mid - 1] && nums[mid] >= nums[mid + 1])
        return nums[mid];

    // If left ele is greater then ignore 2nd half of the elements
    if (nums[mid] < nums[mid - 1])
        end = mid - 1;

    // Else ignore first half of the elements
    else
        start = mid + 1;
}

return nums[start];