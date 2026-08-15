class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x = 0;
        int k = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            x=x^nums[i];
            if(nums[i]==0)k++;
        }
        if(k==n){
            return 0;
        }
        if(x!=0){
            return n;
        }else{
            return n-1;
        }
     return -1;
    }
};