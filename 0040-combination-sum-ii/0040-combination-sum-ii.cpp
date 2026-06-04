class Solution {
public:
    void recur(int i, vector<int>& c, vector<int>& arr,
               vector<vector<int>>& ans, int target) {
               if(target==0){
                ans.push_back(arr);
                return;
               }
               for(int idx = i;idx<c.size();idx++){
                if(idx>i && c[idx]==c[idx-1]){
                    continue;
                }
                if(c[idx]>target){
                    break;
                }
                arr.push_back(c[idx]);
                recur(idx+1,c,arr,ans,target-c[idx]);
                arr.pop_back();
               }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
       sort(candidates.begin(),candidates.end());
        recur(0, candidates, arr, ans, target);
        return ans;
    }
};