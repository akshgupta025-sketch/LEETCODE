class Solution {
public:
using ll = long long;
    int maxNumberOfFamilies(int n, vector<vector<int>>& rs) {
        sort(rs.begin(),rs.end());
      ll cnt = 0;
      set<int>st;
      for(int i=0;i<rs.size();){
        int row = rs[i][0];
        st.insert(rs[i][0]);
        int j = i;
        set<int>seats;
        while(j<rs.size() && rs[j][0]==row){
seats.insert(rs[j][1]);
j++;
        }
        bool left = true;
        bool mid = true;
        bool right = true;
        for(int x:seats){
            if(x>=2 && x<=5){
                left = false;
            }
             if(x>=4 && x<=7){
                mid = false;
            }
            if(x>=6 && x<=9){
                right = false;
            }
        }
        if(left && right ){
            cnt+=2;
        }else if(left||mid||right){
            cnt++;
        }
        i=j;
      }
      cnt+=2LL*(n-st.size());
      return cnt;
    }
};