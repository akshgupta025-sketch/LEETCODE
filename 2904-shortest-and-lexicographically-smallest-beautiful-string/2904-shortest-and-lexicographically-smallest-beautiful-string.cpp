class Solution {
public:
string lect(string ans, string mov){
  if(ans=="")return mov;
    if(ans.size()<mov.size())return ans;
    if(ans.size()>mov.size())return mov;
    return min(ans,mov);
}
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int len = n;
        int l = 0;
        int r = 0;
        int cnt = 0;
        string ans="";
        while(r<n){
          if(s[r]=='1')cnt++;
          while(cnt>k){
            if(s[l]=='1')cnt--;
            l++;
          }
          while(l<=r && s[l]=='0'){
            l++;
          }
          if(r-l+1<=len && cnt == k){
             len=r-l+1;
             string mov = s.substr(l,len);
            ans = lect(ans,mov);

          }
          r++;
        }
     return ans;
    }
};