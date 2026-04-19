class Solution {
public:
    int recursive(vector<int>& nums,int low ,int high, int target){
        if(low>high){
            return -1;
        }
        int mid = (low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
           return recursive(nums,low,mid-1,target);
        } else{
           return recursive(nums,mid+1,high,target);
        }
    }
    int search(vector<int>& nums, int target) {
       int n = nums.size();
       int ans = recursive(nums,0,n-1,target);
       return ans;
    }
};