class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int num = 0;
        int n = g.size();
        int m = s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int bhag = 0;
        for(int i=0;i<n;i++){
            if(bhag>=m)break;
              while(bhag<m){
                if(s[bhag]>=g[i]){
                    num++;
                    bhag++;
                    break;
                }
                bhag++;
              }
        }
        return num;
    }
};