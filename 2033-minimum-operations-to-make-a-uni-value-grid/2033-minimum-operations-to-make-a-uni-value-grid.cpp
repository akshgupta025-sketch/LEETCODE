class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int>t;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                t.push_back(grid[i][j]);
            }
        }
            int rem = t[0]%x;
            for(int i=0;i<t.size();i++){
                if(t[i]%x!=rem){
                    return -1;
                }
            }
            sort(t.begin(),t.end());
             int me = t[t.size()/2];
             int p = 0;
             for(int i=0;i<t.size();i++){
                p+=abs(t[i]-me)/x;
             }
             return p;
    }
};