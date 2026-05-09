
class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        int zero = 0;
        int one = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')one++;
            else zero++;
        }
        if(zero==0||one==0||n<=2||one==1) return 0;
        int ans = one;
        if(s[0]=='1'&&s[n-1]=='1')ans-=2;
        else ans-=1;
        return min(ans,zero);
    }
};
