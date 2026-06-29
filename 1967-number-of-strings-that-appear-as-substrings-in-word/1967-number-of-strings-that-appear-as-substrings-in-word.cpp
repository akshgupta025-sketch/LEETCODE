class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        vector<string>all;
        int n = word.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string s = word.substr(i,j-i+1);
                all.push_back(s);
            }
        }
        int cnt = 0;
        for(string m:patterns){
            if(find(all.begin(),all.end(),m)!=all.end()){
                cnt++;
            }
        }
        return cnt;
    }
};