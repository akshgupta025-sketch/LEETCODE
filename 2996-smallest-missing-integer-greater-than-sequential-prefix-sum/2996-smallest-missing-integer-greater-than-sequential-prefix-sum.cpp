class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int len = 1;
        int sum = nums[0];
            for(int j=1;j<n;j++){
                if(nums[j]==(nums[j-1]+1)){
                    len++;
                    sum+=nums[j];
                }else{
                    break;
                }
            }
            vector<bool>mp(2500,false);
            for(int num:nums){
               mp[num]=true;
            }
            while(mp[sum]){
                sum++;
            }
            return sum;
        }
};