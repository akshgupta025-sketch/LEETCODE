class Solution {
public:
using ll = long long;
// CONVERT TO STRING AS EASY TO DOABLE INSTEAD OF ARRAY AND ALL;
 
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
       int ans = 0;
       unordered_set<string>st;
       for(int x:arr1){
        string s = to_string(x);
        string temp ="";
        for(auto c:s){
            temp+=c;
            st.insert(temp);
        }
       }
       for(int x:arr2){
        string s = to_string(x);
        string temp = "";
        for(auto c:s){
            temp+=c;
            if(st.find(temp)!=st.end()){
                ans = max(ans,(int)temp.size());
            }
        }
       }
       return ans;
    }
};