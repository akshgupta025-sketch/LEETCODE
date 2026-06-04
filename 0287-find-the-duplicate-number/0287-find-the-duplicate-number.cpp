class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x = 0;
        int ans = 0;
        for(int i=0;i+1<nums.size();i++){
            int y = nums[i]^nums[i+1];
            if(y==0){
                ans = nums[i];
                break;
            }else{
                x=0;
            }
        }
       return ans;
    }
};