class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i = 0; i < n - 3; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;   

            for(int j = i + 1; j < n - 2; j++) {
                if(j > i + 1 && nums[j] == nums[j-1]) continue; 

                long long newTarget = (long long)target - nums[i] - nums[j];

                int k = j + 1;
                int p = n - 1;

                while(k < p) {
                    long long sum = (long long)nums[k] + nums[p];

                    if(sum < newTarget) {
                        k++;
                    }
                    else if(sum > newTarget) {
                        p--;
                    }
                    else {
                        ans.push_back({nums[i], nums[j], nums[k], nums[p]});
                        k++;
                        p--;

                        while(k < p && nums[k] == nums[k-1]) k++;

                        while(k < p && nums[p] == nums[p+1]) p--;
                    }
                }
            }
        }
        return ans;
    }
};