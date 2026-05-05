class Solution {
public:
    int maxDepth(string s) {
        int i = 0;
        int n = s.size();
        int ans = 0;
        int w = 0;
        while(i<n){
            if(s[i]=='('){
                w+=1;
               ans = max(ans,w);
               i++;
            }else if(s[i]==')'){
                w-=1;
                i++;
            }else{
                i++;
            }
        }
        return ans;
    }
};