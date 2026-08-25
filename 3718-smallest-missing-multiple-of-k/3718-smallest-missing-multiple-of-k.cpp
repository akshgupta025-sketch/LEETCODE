class Solution {
public:
    int missingMultiple(vector<int>& a, int k) {
       int m = k;
       int n = a.size();
       bool x = true;
       unordered_map<int,bool>mp;
       for(int i=0;i<n;i++){
        mp[a[i]]=true;
       }
       while(x){
        if(mp[m]==false){
            return m;
        }
        m+=k;
       }
       return -1;
    }
};
