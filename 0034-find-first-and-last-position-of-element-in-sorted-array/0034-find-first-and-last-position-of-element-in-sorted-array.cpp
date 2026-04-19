class Solution {
public:
     int val(vector<int>& nums,int n,int target){
        int low =0;
        int high = n-1;
        int ans1 = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                ans1 = mid;
                high = mid-1;
            } else if(nums[mid]<target){
                low = mid+1;
            } else{
                high = mid-1;
            }
        }
        return ans1;
     }
     int val2(vector<int>& nums,int n,int target){
        int low =0;
        int high = n-1;
        int ans2 = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                ans2 = mid;
                low = mid+1;
            } else if(nums[mid]<target){
                low = mid+1;
            } else{
                high = mid-1;
            }
        }
        return ans2;
     }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        ans.push_back(val(nums,n,target));
        ans.push_back(val2(nums,n,target));
        return ans;
    }
};