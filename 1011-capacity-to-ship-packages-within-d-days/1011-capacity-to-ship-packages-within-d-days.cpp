class Solution {
public:
using ll = long long;
       ll diwas(vector<int>& weights,int mid,int n){
        int s = 0;
        int dy = 1;
        for(int i=0;i<n;i++){
            s+=weights[i];
            if(s>mid){
                s = weights[i];
                dy++;
            }
        }
        return dy;
       }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        ll low = *max_element(weights.begin(),weights.end());
        ll high =0;
        for(int i=0;i<n;i++){
            high+=weights[i];
        }
    while(low<high){
           ll mid = low+(high-low)/2;
         ll  d = diwas(weights,mid,n);
           if(d<=days){
             high = mid;
           }else{
            low = mid+1;
           }
    }
    return low;
    }
};