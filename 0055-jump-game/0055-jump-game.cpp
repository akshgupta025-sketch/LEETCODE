class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int i = 0;
        if(n==1)return true;
        while(i<n){
            int j = i;
            int jump = nums[i]+i;;
          int next = i;
          int maxu = -1;
          while(j<=min(jump,n-1)){
            if(j+nums[j]>=maxu){
                maxu=j+nums[j];
               next = j;
            }
            j++;
          }
            if(n-1-i<=nums[i])return true;
         if(next==i)return false;
         i=next;
                
        }
        return false;
    }
};