class Solution {
public:
int func(string s){
    int weav = 0;
    int n = s.size();
    for(int i=1;i<n-1;i++){
       if(((s[i]>s[i-1])&&(s[i]>s[i+1]))||((s[i]<s[i-1])&&(s[i]<s[i+1]))){
        weav++;
       }
    }
    return weav;
}
    int totalWaviness(int num1, int num2) {
        int total = 0;
        for(int i=num1;i<=num2;i++){
            string s = to_string(i);
            total+=func(s);
        }
        return total;
    }
};