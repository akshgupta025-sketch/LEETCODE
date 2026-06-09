class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long minu = *min_element(nums.begin(),nums.end());
    long long maxu = *max_element(nums.begin(),nums.end());
       long long ans = (maxu-minu)*k;
       return ans;
    }
};