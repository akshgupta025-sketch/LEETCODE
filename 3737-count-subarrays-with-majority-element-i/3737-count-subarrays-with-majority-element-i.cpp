class Solution {
public:
using ll = long long;
    int countMajoritySubarrays(vector<int>& nums, int target) {
        ll n = nums.size();
        ll ans = 0;
        for(int i=0;i<n;i++){
            int j = n-1;
            int cnt = 0;
            for(int k=i;k<=j;k++){
                if(nums[k]==target){
                    cnt++;
                }
            }
            while(i<=j){
             if(cnt>(j-i+1)/2)ans++;
             if(nums[j]==target){
                cnt--;
             }
             j--;
            }
        }
        return ans;
    }
};