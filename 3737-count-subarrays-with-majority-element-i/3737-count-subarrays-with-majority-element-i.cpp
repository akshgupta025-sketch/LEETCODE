class Solution {
public:
using ll = long long;
    int countMajoritySubarrays(vector<int>& nums, int target) {
        ll n = nums.size();
          // BRUTE FORCE
        ll ans = 0;
    //     for(int i=0;i<n;i++){
    //         int cnt = 0;
    //         for(int j=i;j<n;j++){
    //             if(nums[j]==target){
    //                 cnt++;
    //             }
    //             if(cnt>(j-i+1)/2)ans++;
    //         }
    // }
  
    // return ans;
    vector<int>prefix(n+1,0);
    for(int i=0;i<n;i++){
        prefix[i+1] = prefix[i]+(nums[i]==target?1:-1);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(prefix[j+1]-prefix[i]>0)ans++;
        }
    }
    return ans;
    }
};