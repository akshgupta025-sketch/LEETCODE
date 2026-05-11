class Solution {
public:
    int count(int n){
        int c = 0;
        while(n>0){
            n=n/10;
            c++;
        }
        return c;
    }
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        int t = 0;
        for(int i=0;i<n;i++){
            if(nums[i]<10){
                c=1;
            }else{
                c=count(nums[i]);
            }
        if(c%2==0){
            t++;
        }
        }
        return t;
    }
};