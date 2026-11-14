class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int maxu  = INT_MAX;
        int x = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
              sum+=nums[j];
             if(sum>0){
                int size = j-i+1;
                if(size>=l && size<=r){
                    maxu = min(maxu,sum);
                    x = 1;
                }
             }
            }
        }
        if(x){
            return maxu;
        }
        return -1;
    }
};