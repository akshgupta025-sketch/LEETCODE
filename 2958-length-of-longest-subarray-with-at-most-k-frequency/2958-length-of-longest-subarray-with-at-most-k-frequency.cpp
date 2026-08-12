class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int len = 0;
        int n = nums.size();
        unordered_map<int,int>mp;
        while(r<n){
           mp[nums[r]]++;
          while(mp[nums[r]]>k){
            mp[nums[l]]--;
            l++;
          }
          len = max(len,r-l+1);
          r++;
        }
        return len;
    }
};