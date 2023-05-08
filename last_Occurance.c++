class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int f=first(nums,target);
        int l=last(nums,target);
        res.push_back(f);
        res.push_back(l);
        return res;
   
    }
    int first(vector<int>&nums,int target){
    int mid;
    int n=nums.size();
    int start = 0, end = n - 1;
    int pos=-1;
    while(start<=end){
        mid=(start+end)/2;
        if(nums[mid]==target){
            pos=mid;
            end=mid-1;
        }
        else if(nums[mid]>target){
            end=mid-1;
    
        }
        else {
            start=mid+1;
        }
    }
    return pos;
    }
    int last(vector<int>&nums,int target){
    int mid;
    int n=nums.size();
    int start = 0, end = n - 1;
    int pos=-1;
    while(start<=end){
        mid=(start+end)/2;
        if(nums[mid]==target){
            pos=mid;
            start=mid+1;
        }
        else if(nums[mid]>target){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
    }
    return pos;}
};