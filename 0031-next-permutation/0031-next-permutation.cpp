class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int n = nums.size();
      int num = -1;
      for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            num = i;
            break;
        }
      }
      if(num==-1){
        reverse(nums.begin(),nums.end());
        return;
      }
      for(int i=n-1;i>num;i--){
        if(nums[i]>nums[num]){
            swap(nums[i],nums[num]);
            break;
        }
      }
        reverse(nums.begin()+num+1,nums.end());
    }
};
