class Solution {
public:
    int numberOfSubstrings(string s) {
       int n = s.size();
       int left = 0;
       int right = 0;
       unordered_map<char,int>mp;
       int ans = 0;
       while(right<n){
          mp[s[right]]++;
         while(mp['a']>=1 && mp['b']>=1 && mp['c']>=1){
            ans+=(n-right);
             mp[s[left]]--;
              left++;
         }
         right++;
       }
       return ans;
    }
};