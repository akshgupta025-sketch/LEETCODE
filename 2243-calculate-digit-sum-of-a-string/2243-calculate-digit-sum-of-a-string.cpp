class Solution {
public:
    string digitSum(string s, int k) {
        int n = s.size();
        if(n<=k){
            return s;
        }
        while(1){
            string a = "";
            int x = 0;
            for(int i=0;i<n;i++){
                x+=(s[i]-'0');
                if((i+1)%k==0){
               
                    string f = to_string(x);
                    a+=f;
                    x = 0;
                }
            }
            if(n%k!=0){
              a+=to_string(x);
            }
            if(a.size()<=k){
                return a;
            }
            s = a;
            n = a.size();
        }
        return "";
        
    }
};