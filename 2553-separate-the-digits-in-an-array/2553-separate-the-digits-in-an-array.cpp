class Solution {
public:
   vector<int> k(int x){
    vector<int>p;
    while(x>0){
        int r = x%10;
        p.push_back(r);
        x=x/10;
    }
   reverse(p.begin(),p.end());
   return p;
   }
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr;
        for(int i=0;i<n;i++){
            vector<int>b = k(nums[i]);
            for(int j=0;j<b.size();j++){
                arr.push_back(b[j]);
            }
        }
        return arr;
    }
};