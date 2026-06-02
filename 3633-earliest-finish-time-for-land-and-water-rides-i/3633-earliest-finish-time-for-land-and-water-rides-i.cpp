class Solution {
public:
    int earliestFinishTime(vector<int>& lst, vector<int>& ld, vector<int>& wst, vector<int>& wd) {
        int ans1 = INT_MAX;
        int ans2 = INT_MAX;
      for(int i=0;i<lst.size();i++){
        for(int j=0;j<wst.size();j++){
            int ans = (max(lst[i]+ld[i],wst[j])+wd[j]);
              ans1 = min(ans1,ans);
        }
      }
      for(int j=0;j<wst.size();j++){
        for(int i=0;i<lst.size();i++){
            int ans = (max(wst[j]+wd[j],lst[i])+ld[i]);
            ans2 = min(ans2,ans);
    }
      }
      return min(ans1,ans2);
    }
};