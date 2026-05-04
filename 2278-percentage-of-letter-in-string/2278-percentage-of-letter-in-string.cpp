class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n = s.size();
        unordered_map<char,int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        int ans = (100*m[letter])/n;
        return ans;
    }
};