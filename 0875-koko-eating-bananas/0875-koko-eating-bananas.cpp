class Solution {
public:
      long long new_hours(vector<int>& piles,long long mid){
       long long hours = 0;
        for(int i =0;i<piles.size();i++){
             hours+= (piles[i]+mid-1)/mid;
        }
        return hours;
      }
    int minEatingSpeed(vector<int>& piles, int h) {
      int n = piles.size();
      long long low = 1;
      long long high = 0;
      long long ans = high;
      for(int i = 0;i<n;i++){
             high = max(high,(long long)piles[i]);
      }
      while(low<=high){
        long long mid = low + (high-low)/2;
        long long hour = new_hours(piles,mid);
        if(hour<=h){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
      }
      return ans;
    }
};