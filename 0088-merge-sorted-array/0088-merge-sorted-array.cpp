class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int i = 0;
      int count = 0;
      int j =0;
      while(i<m && j<n){
        if(nums1[i]>nums2[j]){
            nums1[m+count]=nums1[i];
            nums1[i]=nums2[j];
           count++;
           i++;
           j++;
        }
        else{
            i++;
        }
      }
      while(j<n){
        nums1[m+count]=nums2[j];
        count++;
        j++;
      }
      sort(nums1.begin(),nums1.end());
    }
};