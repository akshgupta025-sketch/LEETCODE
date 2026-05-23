class Solution {
public:
  bool is(vector<int>temp){
    for(int i=0;i+1<temp.size();i++){
        if(temp[i+1]<temp[i]){
            return false;
        }
    }
    return true;
  }
    bool check(vector<int>& nums) {
        // NOT OPTIMAL
    //    int n = nums.size();
    //    for(int k = 0;k<n;k++){
    //     vector<int>temp(n);
    //     for(int i=0;i<n;i++){
    //         temp[(i+k)%n]=nums[i];
    //     }
    //     if(is(temp)){
    //         return true;
    //    }
    // }
    // return false;
    // }
    // LOGIC - SORTED COMPARE ADJACENT + ROTATION PROPERTY - OBSERV ROTATE > <=1 ->TRUE
    int n = nums.size();
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(nums[(i+1)%n]<nums[i]){
            cnt++;
        }
    }
    return cnt<=1;
    }
};
    