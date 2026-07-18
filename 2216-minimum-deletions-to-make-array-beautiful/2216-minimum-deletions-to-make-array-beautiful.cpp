class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int i = 0;
          while(i+1<n){
            if((i-cnt)%2==0){
             if(nums[i]==nums[i+1]){
                cnt++;
             }
            }
            i++;
        }
        if((n-cnt)%2==0){
            return cnt;
                   }
        return cnt+1;
    }
};