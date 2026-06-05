class Solution {
public:
void recur(int i,vector<int>& arr,vector<int>&nums,vector<vector<int>>& ans){
    ans.push_back(arr);
    for(int idx = i;idx<nums.size();idx++){
        if(idx>i && nums[idx]==nums[idx-1]){
            continue;
        }
        arr.push_back(nums[idx]);
        recur(idx+1,arr,nums,ans);
        arr.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>arr;
        recur(0,arr,nums,ans);
        return ans;
    }
};