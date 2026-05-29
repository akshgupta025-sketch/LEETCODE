class Solution {
    using ll = long long;

public:

    vector<ll> findnge(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        vector<ll> arr(n);

        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }

            arr[i] = st.empty() ? n : st.top();

            st.push(i);
        }

        return arr;
    }

    vector<ll> findnse(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        vector<ll> arr(n);

        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }

            arr[i] = st.empty() ? n : st.top();

            st.push(i);
        }

        return arr;
    }

    vector<ll> findpse(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        vector<ll> arr(n);

        for (int i = 0; i < n; i++) {

            while (!st.empty() && nums[st.top()] > nums[i]) {
                st.pop();
            }

            arr[i] = st.empty() ? -1 : st.top();

            st.push(i);
        }

        return arr;
    }

    vector<ll> findpge(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        vector<ll> arr(n);

        for (int i = 0; i < n; i++) {

            while (!st.empty() && nums[st.top()] < nums[i]) {
                st.pop();
            }

            arr[i] = st.empty() ? -1 : st.top();

            st.push(i);
        }

        return arr;
    }

    long long subArrayRanges(vector<int>& nums) {

        vector<ll> nge = findnge(nums);
        vector<ll> nse = findnse(nums);
        vector<ll> pge = findpge(nums);
        vector<ll> pse = findpse(nums);

        ll maxSum = 0;
        ll minSum = 0;

        int n = nums.size();

        for (int i = 0; i < n; i++) {

            ll left = i - pge[i];
            ll right = nge[i] - i;

            maxSum += left * right * nums[i];
        }

        for (int i = 0; i < n; i++) {

            ll left = i - pse[i];
            ll right = nse[i] - i;

            minSum += left * right * nums[i];
        }

        return maxSum - minSum;
    }
};