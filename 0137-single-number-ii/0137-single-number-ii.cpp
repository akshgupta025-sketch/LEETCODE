class Solution {
public:
using ll = long long;
    int singleNumber(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int r = 0;
     int c = 2;
     int cnt = 1;
     int x = (nums.size())/3;
     while(cnt<=x){
        if(nums[r]==nums[r+1] && nums[r]!=nums[c]){
            return nums[c];
            break;
        }else if(nums[r+1]==nums[c] && nums[c]!=nums[r]){
            return nums[r];
            break;
        }
        r+=3;
        c+=3;
        cnt++;
     }
     return nums[nums.size()-1];
    }
};