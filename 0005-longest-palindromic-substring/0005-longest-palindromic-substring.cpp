class Solution {
public:
    bool pal(int l,int r,string &s){
        while(l<=r){
            if(s[l]==s[r]){
                l++;
                r--;
            }else{
                return false;
            }
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        if(n==0) return "";

        int k = 0, t = 0;

        for(int l=0;l<n;l++){
            for(int r=l;r<n;r++){
                if(r-l > t-k) {   
                    if(pal(l,r,s)){
                        k=l;
                        t=r;
                    }
                }
            }
        }

        return s.substr(k, t-k+1);
    }
};


