class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int m = a.size();
        int n =a[0].size();
        int i = 0;
        while(i<m){
            int low = 0;
            int high = n-1;
            while(low<=high){
                int mid = (low+high)/2;
                if(a[i][mid]==target){
                    return true;
                }else if(a[i][mid]>target){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }
            i++;
        }
        return false;
    }
};