class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int ans = 0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]==1){
                ans = nums[i];
                break;
            }else{
                mp[nums[i]]++;
            }
        }
       return ans;
    }
};