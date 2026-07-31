class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mp;
        int n = word.size();
        for(char c:word){
            mp[c]++;
        }
        int ans = 0;
       vector<int>freq;
       for(auto it:mp){
        freq.push_back(it.second);
       }
       sort(freq.begin(),freq.end(),greater<int>());
       for(int i=0;i<freq.size();i++){
        ans+=((i/8)+1)*freq[i];
       }
       return ans;
    }
};