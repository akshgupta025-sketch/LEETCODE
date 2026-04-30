class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int m = a.size();
        int n =a[0].size();
        int row = 0;
        int col = n-1;
        while(row<m && col>=0){
            if(a[row][col]==target){
                return true;
            }else if(a[row][col]<target){
                row++;
            }else{
                col--;
            }
        }
        return false;
    }
};