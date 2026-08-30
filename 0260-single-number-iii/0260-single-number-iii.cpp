class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int>v;
        for(int i=1;i<n-1;i++){
            if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]){
                v.push_back(nums[i]);
            }
        }
        if(nums[0]!=nums[1])v.push_back(nums[0]);
        if(nums[n-1]!=nums[n-2])v.push_back(nums[n-1]);
        return v;
    }
};