class Solution {
public:
   
    int maximumLengthSubstring(string s) {
    int r = 0;
    int l = 0;
    int n = s.size();
    int len = 0;
    unordered_map<char,int>freq;
    while(r<n){
        freq[s[r]]++;
        while(freq[s[r]]>2){
            freq[s[l]]--;
           l++;
        }
        len = max(len,r-l+1);
        r++;
    }
      return len;
    }
};