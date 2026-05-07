class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        vector<string>word;
        string temp ="";
        for(int i =0;i<n;i++){
            if(s[i]!=' '){
                temp+=s[i];
            }else{
                if(!temp.empty()){
                    word.push_back(temp);
                    temp.clear();
                }
            }}
            if(!temp.empty()){
                word.push_back(temp);
                temp.clear();
            }
            reverse(word.begin(),word.end());
            string ans = "";
            for(int i=0;i<word.size();i++){
                ans+=word[i];
                if(i!=word.size()-1) ans+=" ";
            }
            return ans;
        }
};