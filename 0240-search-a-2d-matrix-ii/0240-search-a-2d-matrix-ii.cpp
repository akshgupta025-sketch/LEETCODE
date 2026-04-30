class Solution {
public:
using ll =  long long;
    bool searchMatrix(vector<vector<int>>& a, int target) {
        ll m = a.size();
        ll n = a[0].size();
        ll r= 0;
        ll c=n-1;
        while(r<m && c>=0) {
            if(a[r][c]==target){
                return true;
            }else if(a[r][c]>target){
                c--;
            }else{
                r++;
            }
        }
        return false;
    }
};