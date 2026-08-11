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
            int ans = sum;
            while(1){
                bool x = true;
                for(int i=0;i<n;i++){
                    if(nums[i]==sum){
                        x = false;
                        break;
                    }
                }
                if(x){
                   ans = sum;
                   break;
                }
             sum++;
            }
            return ans;
        }
};