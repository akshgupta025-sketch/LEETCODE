class Solution {
public:
  #define ll long long
    int findMin(vector<int>& nums) {
        ll n = nums.size();
        ll low = 0;
        ll high = n-1;
        while(low<high){
            ll mid = low+(high-low)/2;
            if(nums[mid]>nums[high]){
                low = mid+1;
            }else if(nums[mid]<nums[high]){
                high = mid;
            }else{
                high--;
            }
        }
        return nums[low];
    }
};