class Solution {
public:
using ll = long long;
int mod = 1e9+7;
        
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.size();
        int m = queries.size();
        vector<ll>prefix(n+1),sum(n+1),pow10(n+1),cnt(n+1);
        pow10[0]=1;
        for(int i=1;i<=n;i++){
             pow10[i] = pow10[i-1]*10%mod;
        }
        for(int i=0;i<n;i++){
             prefix[i+1]=(prefix[i]+(s[i]-'0'))%mod;
            if(s[i]!='0'){
            cnt[i+1] = cnt[i]+1;
            sum[i+1] = (sum[i]*10+(s[i]-'0'))%mod;
        }else{
         cnt[i+1]=cnt[i];
            sum[i+1]=sum[i];
        }
        }
        vector<int>ans;
        for(int i=0;i<m;i++){
           int l = queries[i][0];
           int r = queries[i][1];
           int len = r-l+1;
           ll diff = (prefix[r+1]-prefix[l]+mod)%mod;
           ll c = cnt[r+1]-cnt[l];
          ll no = (sum[r+1] - (sum[l] * pow10[c]) % mod + mod) % mod;
           ans.push_back((no*diff)%mod);
        }
        return ans;
    }
};