class Solution {
public:
    int maxDistinct(string s) {
        int l = s.length();
        map<char,int>mp;
        int c = 0;
        for(int i=0;i<l;i++){
            mp[s[i]]=0;
        }
        for(int i=0;i<l;i++){
            if(mp[s[i]]==0){
                c++;
                mp[s[i]]++;
            }
        }
        return c;
    }
};