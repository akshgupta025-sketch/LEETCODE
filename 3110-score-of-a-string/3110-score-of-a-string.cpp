class Solution {
public:
    int scoreOfString(string s) {
        int st = 0;
        int n = s.length();
        for(int i=0;i+1<n;i++){
            st+= abs((int)s[i+1]-(int)s[i]);
        }
        return st;
    }
};