class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       vector<int>ans;
       sort(nums.begin(),nums.end());
       int x = nums[0];
       int y = nums[nums.size()-1];
       while(x<y){
        bool b = false;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==x){
                b=true;
                break;
            }
        }
        if(b==false)ans.push_back(x);
        x=x+1;
       }
       return ans;
    }
};