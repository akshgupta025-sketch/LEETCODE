class Solution {
public:
int abs = 1e9+7;
    int minimumCost(vector<int>& nums, int k) {
        int n = nums.size();
        long  ans = 0;
        int t = k;
        for(int i=0;i<n;i++){
            int cnt = 0;
            if(k<nums[i]){
               int x = nums[i]-k;
                if(x%t==0){
                    cnt+=(x/t);
                }else{
                    cnt+=((x/t)+1);
                } 
                ans+=cnt;
                ans=ans%abs;
                k+=cnt*t;
                k-=nums[i];
            }else{
                k-=nums[i];
            }
        }
        long m = ((ans)*(ans+1)/2)%abs;
        return m;
    }
};