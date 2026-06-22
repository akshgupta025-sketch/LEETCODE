class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int freqb = 0;    
        int freqa = 0;    
        int freql = 0;    
        int freqo = 0;    
        int freqn = 0;    
      for(char ch:text){
        if(ch=='b'){
            freqb++;
        }else if(ch=='a'){
            freqa++;
        }else if(ch=='l'){
            freql++;
        }else if(ch=='o'){
            freqo++;
        }else if(ch=='n'){
            freqn++;
        }
      }
      int ans = INT_MAX;
      ans = min(ans,freqb);
      ans = min(ans,freqa);
      ans = min(ans,freql/2);
      ans = min(ans,freqo/2);
      ans = min(ans,freqn);
      return ans;
    }
};