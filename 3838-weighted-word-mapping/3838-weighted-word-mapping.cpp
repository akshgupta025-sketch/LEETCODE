class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s = "";
        int n = words.size();
        for(int i=0;i<n;i++){
            string k = words[i];
            int cnt = 0;
            for(int j=0;j<k.size();j++){
                cnt+=weights[int(k[j]-97)];
            }
            cnt=cnt%26;
            s+=char('z'-cnt);
        }
        return s;
    }
};