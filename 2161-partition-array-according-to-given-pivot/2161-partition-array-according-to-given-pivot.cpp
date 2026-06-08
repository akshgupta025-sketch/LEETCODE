class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
       int n = nums.size();
       vector<int>temp(n);
      int left = 0;
      int right= n-1;
      int i = 0;
      int j = n-1;
      while(i<n){
        if(nums[i]<pivot){
            temp[left++]=nums[i];
        }
        if(nums[j]>pivot){
            temp[right--]=nums[j];
        }
        i++;
        j--;
      }
      while(left<=right){
        temp[left++]=pivot;
              }
              return temp;
    }
};