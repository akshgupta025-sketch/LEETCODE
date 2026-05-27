class Solution {
public:
    int numberOfSpecialChars(string s) {
      int n = s.size();
      unordered_map<char,int>lower;
      unordered_map<char,int>upper;
      for(int i=0;i<n;i++){
        if(islower(s[i])){
            lower[s[i]]=i;
        }else{
            if(upper.find(s[i])==upper.end()){
            upper[s[i]]=i;
        }
      }
      }
      int cnt = 0;
      for(auto it:lower){
        char ch = it.first;
        char p = toupper(ch);
        if(upper.find(p)!=upper.end()){
           if(upper[p]>lower[ch]){
            cnt++;
           }
        }
      }
      return cnt;
    }
};