class Solution {
public:
     void recur(int i,vector<int>& c,vector<int>& arr,vector<vector<int>>& ans, int target){
        if(target==0){
            ans.push_back(arr);
            return;
        }
        if(i==c.size()||target<0){
            return;
        }
        arr.push_back(c[i]);
        recur(i,c,arr,ans,target-c[i]);
        arr.pop_back();
        recur(i+1,c,arr,ans,target);
        }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>arr;
        vector<vector<int>>ans;
        recur(0,candidates,arr,ans,target);
        return ans;
    }
};