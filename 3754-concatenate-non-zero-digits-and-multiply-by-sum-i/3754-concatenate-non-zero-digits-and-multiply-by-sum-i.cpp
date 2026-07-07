class Solution {
public:
    using ll = long long;
    long long sumAndMultiply(int n) {
        ll num = 0;
        ll sum = 0;
        vector<long long>ans;
        while(n>0){
            ll rem = n%10;
            if(rem!=0){
             ans.push_back(rem);
                sum=sum+rem;
            }
            n=n/10;
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            num = num*10 + ans[i];
        }
        return num*sum;
    }
};