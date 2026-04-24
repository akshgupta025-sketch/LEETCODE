class Solution {
public:
using ll = long long;
ll divi(vector<int>& nums , int n , int mid){
ll s = 0;
for(int i=0;i<n;i++){
    s+= ceil((double)nums[i]/mid);
}
return s;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        if(n>threshold) return -1;
        ll low =1;
        ll high = 0;
        for(int i=0;i<n;i++){
            if(nums[i]>high){
                high = nums[i];
            }
        }
        while(low<=high){
            ll mid = (low+high)/2;
            ll result = divi(nums,n,mid);
            if(result<=threshold){
             high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};