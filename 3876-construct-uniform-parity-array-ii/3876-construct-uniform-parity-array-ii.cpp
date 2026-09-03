class Solution {
public:
    using ll = long long;
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
      vector<long long>even;
        vector<long long>odd;
        ll n = nums1.size();
        for(int num:nums1){
            if(num%2==0){
                even.push_back(num);
            }else{
                odd.push_back(num);
            }
        }
          int p = 1;
        if(even.size()==n||odd.size()==n){
            return true;
        }
        for(int i=0;i<even.size();i++){
            int cnt = 0;
            for(int j=0;j<odd.size();j++){
                if(odd[j]<even[i]){
                  cnt++;
                    break;
            }
        }
            if(cnt>0){
                p=0;
            }else{
                return false;
            }
            }
            
        return p==0;
    }
};