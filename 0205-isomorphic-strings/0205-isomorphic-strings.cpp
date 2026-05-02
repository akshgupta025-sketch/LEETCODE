class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int x = s.size();
        int a1[256]={0};
        int a2[256]={0};
     for (int i=0;i<x;i++){
        if(a1[s[i]]!=a2[t[i]]) return false;
        a1[s[i]]=i+1;
        a2[t[i]]=i+1;
     }
        return true;
    }
};