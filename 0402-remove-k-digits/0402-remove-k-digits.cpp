class Solution {
public:
using ll = long long;
    string removeKdigits(string num, int k) {
        string s = "";
        for(char ch:num){
            while(!s.empty() && s.back()>ch && k>0){
                s.pop_back();
                k--;
            }
            s.push_back(ch);
        }
        while(k>0 && !s.empty()){
            s.pop_back();
            k--;
        }
       int i = 0;
      while(i<s.size() && s[i]=='0'){
        i++;
      }
      s = s.substr(i,s.size());
        if(s.empty()){
            return "0";
        }else{
            return s;
        }
    }
};