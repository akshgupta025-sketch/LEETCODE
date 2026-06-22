class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;  
      for(char ch:text){
        if(ch=='b'){
            mp['b']++;
        }else if(ch=='a'){
            mp['a']++;
        }else if(ch=='l'){
            mp['l']++;
        }else if(ch=='o'){
            mp['o']++;
        }else if(ch=='n'){
            mp['n']++;
        }
      }
      int ans = INT_MAX;
     string t = "balon";
     for(char ch:t){
        if(ch=='l'||ch=='o'){
            ans = min(ans,mp[ch]/2);
        }else{
            ans = min(ans,mp[ch]);
        }
     }
     return ans;
    }
};