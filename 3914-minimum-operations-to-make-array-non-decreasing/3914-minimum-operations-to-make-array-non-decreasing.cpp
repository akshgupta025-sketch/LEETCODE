class Solution {
public:
    using ll = long long;
    long long minOperations(vector<int>& nums) {
        int n = nums.size();
        ll a = 0;
        for(int i=0;i+1<n;i++){
            ll p = nums[i]+a;
            ll q = nums[i+1]+a;
            if(q<p){
              ll c = p-q;
                a+=c;
            }
        }
        return a;
    }
};