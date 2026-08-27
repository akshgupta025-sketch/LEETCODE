class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.size();
        int freq[26]={};
        for(char c:s){
            freq[c-'a']++;
        }
        for(char c:target){
            freq[c-'a']--;
        }
        for(int i=target.size()-1;i>=0;i--){
            int cur = target[i]-'a';
            freq[cur]++;
        bool ok = true;
        for(int c=0;c<26;c++){
             if(freq[c]<0){
                ok = false;
                break;
             }
        }
        if(!ok) continue;
        int next = -1;
        for(int c=cur+1;c<26;c++){
            if(freq[c]>0){
                next = c;
                break;
            }
        }
        if(next==-1)continue;
        freq[next]--;
        string ans = target.substr(0,i);
        ans+=char('a'+next);
        for(int c=0;c<26;c++){
            ans.append(freq[c],char('a'+c));
        }
        return ans;
    }
    return "";
    }
};