class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int cnt = 0;
        int n = costs.size();
        sort(costs.begin(),costs.end());
        int i = 0;
        while(i<n && coins>0){
            coins-=costs[i];
            if(coins>=0)cnt++;
            i++;
        }
        return cnt;
    }
};