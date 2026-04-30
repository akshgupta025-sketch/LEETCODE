class Solution {
public:
   int arr(vector<vector<int>>& a , int mid){
    int n = a.size();
    int val = INT_MIN;
    int ind = -1;
    for(int i=0;i<n;i++){
        if(a[i][mid]>val){
            val = a[i][mid];
            ind = i;
        }
    }
    return ind;
   }
    vector<int> findPeakGrid(vector<vector<int>>& a) {
        int m = a.size();
        int n = a[0].size();
        int low= 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            int t = arr(a,mid);
            int left = mid-1>=0 ? a[t][mid-1] : INT_MIN;
            int right = mid+1<n ? a[t][mid+1] : INT_MIN;
            if(a[t][mid]>left && a[t][mid]>right){
                return {t,mid};
            }else if(left>a[t][mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
    }
    return {-1,-1};
    }
};