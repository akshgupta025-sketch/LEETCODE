class Solution {
public:
    int minimumCost(vector<int>& cost) {
      int n = cost.size();
      int sum = 0;
      for(int i=0;i<n;i++){
        sum+=cost[i];
      }
      sort(cost.begin(),cost.end() ,greater<int>());
      vector<int>mark(n,0);
      for(int i=2;i<n;i+=3){
        sum-=cost[i];
      }
      return sum;
    }
};