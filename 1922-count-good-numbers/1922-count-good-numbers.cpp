class Solution {
public:
const long long mod = 1e9+7;
using ll = long long;
ll power(ll x,ll n){
    ll num = 1;
    while(n>0){
        if(n%2==1){
            num=(num*x)%mod;
        }
            x = (x*x)%mod;
        n = n/2;
    }
    return num;
}
    int countGoodNumbers(long long n) {
      ll even = (n+1)/2;
      ll odd = n/2;
      ll ans = (power(5,even)*power(4,odd))%mod;
      return ans;
    }
};