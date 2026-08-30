class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        int n=nums.size();
        if(n==1) return 1;
        if(n==2) return 2;
        int min_idx,max_idx;
        for(int i=0;i<n;i++){
            if(nums[i]==maxi) max_idx=i;
            if(nums[i]==mini) min_idx=i;
        }
        return min({max(min_idx,max_idx)+1,n-min(min_idx,max_idx),n+1+min(max_idx,min_idx)-max(max_idx,min_idx)});
    }
};