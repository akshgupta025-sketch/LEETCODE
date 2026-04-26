class Solution {
public:
    using ll = long long;
    long long minOperations(vector<int>& nums) {
        int n = nums.size();
        ll t = 0;
        ll a = 0;
        for(int i=0;i+1<n;i++){
            ll p = nums[i]+t;
            ll q = nums[i+1]+t;
            if(q<p){
              ll c = p-q;
                t+=c;
                a+=c;
            }
        }
        return a;
    }
};