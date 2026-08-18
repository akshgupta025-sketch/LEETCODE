class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
                int n = nums.size();
         if(n==k){
            return  *max_element(nums.begin(),nums.end());
        }
        if(k==1){
            int maxi=-1;
            for(int num:nums){
                if(mp[num]==1){
                maxi=max(maxi,num);
            }
            }
            return maxi;
        }
        if(mp[nums[0]]==1 && mp[nums[n-1]]==1){
            return max(nums[0],nums[n-1]);
        }else if(mp[nums[0]]==1){
            return nums[0];
        }else if(mp[nums[n-1]]==1){
            return nums[n-1];
        }
       
        return -1;
    }
};