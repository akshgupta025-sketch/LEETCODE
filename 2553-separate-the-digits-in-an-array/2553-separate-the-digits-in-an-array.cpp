class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr;
        for(int i=0;i<n;i++){ //though each number to string then easy
           string s = to_string(nums[i]);
           for(int j=0;j<s.size();j++){
               int x = s[j]-'0';
               arr.push_back(x);
           }}
           return arr;
    }
};