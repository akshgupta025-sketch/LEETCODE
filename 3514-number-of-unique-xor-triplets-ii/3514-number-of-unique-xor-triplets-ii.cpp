class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
       unordered_set<int>st;
       unordered_set<int>m;
      for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
       m.insert(nums[i]^nums[j]);
    }
}
for(int i=0;i<n;i++){
    st.insert(nums[i]);
}
if(n<=2 && st.size()==1) return 1;
else if(n<=2) return n;
       for(int a:m){
     for(int i=0;i<n;i++){
        st.insert(nums[i]^a);
     }
    }
    return st.size();
    }
};