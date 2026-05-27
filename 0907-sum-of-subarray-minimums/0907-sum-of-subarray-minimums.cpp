class Solution {
public:
   vector<int>fnse(vector<int>& arr){
    int n = arr.size();
    vector<int>ans(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i] = st.top();
        }else{
            ans[i] = n;
        }
        st.push(i);
    }
    return ans;
   }
   vector<int>fpse(vector<int>& arr){
    int n = arr.size();
    vector<int>ans(n);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty()&& arr[st.top()]>arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i] = st.top();
        }else{
            ans[i] = -1;
        }
        st.push(i);
    }
    return ans;
   }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int>nse = fnse(arr);
        vector<int>pse = fpse(arr);
        int n = arr.size();
        int mod = 1e9+7;
    long long sum = 0;
        for(int i=0;i<n;i++){
            int l = i-pse[i];
            int r = nse[i] - i;
            long long freq = l*r*1LL;
            long long val = (freq*arr[i]*1LL)%mod;
            sum =(sum+val)%mod;
        }
        return sum;
    }
};