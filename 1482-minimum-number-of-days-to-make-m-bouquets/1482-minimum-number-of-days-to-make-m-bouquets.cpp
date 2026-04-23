class Solution {
public:
    long long days(vector<int> bloomDay , int k , int mid){ // pass by value (copy made here)
        long long count = 0;
        int n  = bloomDay.size();
        
        int c = 0;
        for(int i=0;i<n;i++){
            if(bloomDay[i] <= mid){
                c++;
                if(c == k){
                    count++;
                    c = 0;
                }
            } else {
                c = 0;
            }
        }
        return count;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long low = 1;
        long long high = 0;

        if(n < (long long)m * k) return -1;

        for(int i=0;i<n;i++){
            high = max(high, (long long)bloomDay[i]);
        }

        int ans = high;

        while(low <= high){
            long long mid = low + (high - low) / 2;

            long long day = days(bloomDay, k, mid);

            if(day >= m){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};