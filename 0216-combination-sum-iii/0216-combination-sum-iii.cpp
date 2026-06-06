class Solution {
public:
void recur(int i,vector<int>& arr, vector<int>& p,vector<vector<int>>& ans,int k,int n){
    if(i==arr.size()){
        if(p.size()==k && n==0){
            ans.push_back(p);
        }
        return;
    }
    if(n<0){
        return;
    }
    p.push_back(arr[i]);
    recur(i+1,arr,p,ans,k,n-arr[i]);
    p.pop_back();
    recur(i+1,arr,p,ans,k,n);  
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>arr;
        for(int i=1;i<=9;i++){
            arr.push_back(i);
        }
        vector<int>p;
        vector<vector<int>>ans;
        recur(0,arr,p,ans,k,n);
        return ans;
    }
};