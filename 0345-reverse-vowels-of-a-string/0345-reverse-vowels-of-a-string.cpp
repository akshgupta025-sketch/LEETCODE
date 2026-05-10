class Solution {
public:
bool isvowel(char a){
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')  return true;
    return false;
}
    string reverseVowels(string s) {
        int n = s.size();
        vector<char>p;
        for(int i=0;i<n;i++){
            if(isvowel(s[i])) p.push_back(s[i]);
        }
        int j = p.size()-1;
        for(int i=0;i<n;i++){
            if(isvowel(s[i]))s[i]=p[j--];
        }
        return s;
    }
};