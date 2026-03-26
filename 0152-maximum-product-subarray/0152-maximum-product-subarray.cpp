class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxp = nums[0];
        for(int i=0;i<n;i++){
            int prod = 1;
            for(int j=i;j<n;j++){
                prod*=nums[j];
                maxp = max(maxp,prod);
            }
        }
        return maxp;
    }
};