class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int left = 0;
        int right = 0;
        int n = s.size();
        int len = 0;
        while(right<n){
           if(mp[s[right]]==0){
               mp[s[right]]++;
            len = max(len,right-left+1);
            right++;
           }else{
            mp[s[left]]--;
            left++;
            }
           }
           return len;
    }
};