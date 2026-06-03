class Solution {
public:
    int earliestFinishTime(vector<int>& lst, vector<int>& ld, vector<int>& wst, vector<int>& wd) {
        int ans1 = INT_MAX;
        int ans2 = INT_MAX;
        int n = lst.size();
        vector<int>p;
        vector<int>s;
        for(int i=0;i<lst.size();i++){
            p.push_back(lst[i]+ld[i]);
        }
        for(int i=0;i<wst.size();i++){
            s.push_back(wst[i]+wd[i]);
        }
        for(int i=0;i<n;i++){
          ans1 = min(ans1,p[i]);
        }
        int ans = INT_MAX;
        for(int i=0;i<wst.size();i++){
         ans = min(ans,max(ans1,wst[i])+wd[i]);
        }
         for(int i=0;i<wst.size();i++){
          ans2 = min(ans2,s[i]);
        }
        for(int i=0;i<lst.size();i++){
       ans = min(ans,max(ans2,lst[i])+ld[i]);
        }
        return ans;
    }
};