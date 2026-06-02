class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int minp = INT_MAX;
    int diff = INT_MIN;
    int n = prices.size();
    for(int i=0;i<n;i++){
      minp = min(minp,prices[i]);
      int prof = prices[i]-minp;
      diff = max(diff,prof);
    }
    return diff;
    }  
};