class Solution {
public:
    string reversePrefix(string s, int k) {
        for(int i=0;i<k/2;i++){
         int temp = s[i];
         s[i]=s[k-1-i];
         s[k-1-i] = temp;
        }
        return s;
    }
};