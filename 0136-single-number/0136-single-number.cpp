class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int n = nums.size();
    //    xor prop a^a =0;
    // xor prop a^0 = a;
    int x = 0;
    for(int num:nums){
        x^=num;
    }
    return x;
    }
};