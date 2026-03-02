class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
       set<vector<int>>st;
       vector<vector<int>>ans;
       for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            long long newt = 1LL*target - nums[i]-nums[j];
            int low = j+1;
            int high = n-1;
            while(low<high){
             long long sum =  1LL*nums[low]+nums[high];
                if(sum<newt){
                    low++;
                } else if(sum>newt){
                    high--;
                } else{
                    st.insert({nums[i],nums[j],nums[low],nums[high]});
                        low++; high--;
                    }
                }
            }
        }
       for(auto it:st){
        ans.push_back(it);
       }
       return ans;
    }
};