class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int n = nums.size();
       int mx = *max_element(nums.begin(),nums.end());
       vector<int>freq(mx+1,0);
       for(int x:nums){
        freq[x]++;
       }
       vector<long long>count(mx+1,0);
       for(int i=1;i<=mx;i++){
        count[i]=freq[i];
        for(int j=2*i;j<=mx;j+=i){
            count[i]+=freq[j];
        }
       }
        for(int i=1;i<=mx;i++){
            count[i] = count[i]*(count[i]-1)/2;
        }
        for(int i=mx;i>=1;i--){
            for(int j=2*i;j<=mx;j+=i){
                count[i]-=count[j];
            }
        }
        vector<long long>prefix(mx+1,0);
        for(int i=1;i<=mx;i++){
            prefix[i]+=prefix[i-1]+count[i];
        }
        vector<int>answ;
        for(int i=0;i<queries.size();i++){
            long long qu = queries[i];
           int low = 1;
           int high = mx;
           int ans = mx;
           while(low<=high){
            int mid = low+(high-low)/2;
            if(prefix[mid]>=qu+1){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
           }
           answ.push_back(ans); 
        }
       return answ;
    }
};