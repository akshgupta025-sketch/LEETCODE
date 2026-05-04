class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int>mp;
       for(char c:s)mp[c]++;
       vector<pair<char,int>>v;
       for(auto it:mp){
        v.push_back({it.first,it.second});
       }
       sort(v.begin(),v.end(),[](pair<char,int> &a, pair<char,int> &b){
        if(a.second==b.second)return a.first>b.first;
        return a.second>b.second;
    });
    string ans ="";
    for(auto p:v){
        ans+=string(p.second,p.first);
    }
    return ans;
    }
};