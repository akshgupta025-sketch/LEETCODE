class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
       int beauty = 0;
       for(int i=0;i<n;i++){
        unordered_map<char,int>freq;
        for(int j=i;j<n;j++){
            freq[s[j]]++;
            int maxi = INT_MIN;
            int minu = INT_MAX;
            for(auto x:freq){
                minu = min(minu,x.second);
                maxi = max(maxi,x.second);
            }
       beauty+=(maxi-minu);
        }
    }
    return beauty;
    }
};