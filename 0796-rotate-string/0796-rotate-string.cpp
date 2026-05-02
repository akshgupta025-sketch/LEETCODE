class Solution {
public:
string rot(string s,int l){
      int n = s.size();
    string t(n,' ');
    for(int i=0;i<n;i++){
        t[i]=s[(i+l)%n];
    }
    return t;
}
    bool rotateString(string s, string goal) {
        int i =0;
         while(i<=s.size()){
            string k = rot(s,i);
            if(k==goal){
                return true;
            }
            i++;
         }
         return false;
    }
};