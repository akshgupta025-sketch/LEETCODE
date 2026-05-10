class Solution {
public:
bool isvowel(char a){
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')  return true;
    return false;
}
    string reverseVowels(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            if(isvowel(s[i]) && isvowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }else if(isvowel(s[i]) && !isvowel(s[j])){
                j--;
            }else if(!isvowel(s[i]) && isvowel(s[j])){
                i++;
            } else {
                i++;
                j--;
            }
        }
        return s;
    }
};