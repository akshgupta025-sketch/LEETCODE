class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
       set<char>st;
       for(char c:s){
        st.insert(c);
       }
       char x='\0';
       string ans="";
       for(char c:st){
        if(mp[c]%2==1){
           x=c;
        }
        for(int j=0;j<mp[c]/2;j++){
            ans+=c;
        }
       }
       string right=ans;
       reverse(right.begin(),right.end());
       if(x!='\0'){
        ans+=x;
       }
        return ans+right;
    }
};