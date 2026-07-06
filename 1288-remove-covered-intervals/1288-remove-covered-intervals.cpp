class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        int cnt = 0;
        for(int i=n-1;i>=0;i--){
            int a = intervals[i][0];
            int b = intervals[i][1];
            int p = 0;
            for(int j=i-1;j>=0;j--){
                if(a>=intervals[j][0] && b<=intervals[j][1]){
                    p=1;
                    break;
                }
            }
            for(int j=i+1;j<n;j++){
                if(a>=intervals[j][0] && b<=intervals[j][1]){
                    p=1;
                    break;
                }
            }
            if(p==0){
                cnt++;
            }
        }
        return cnt;
    }
};