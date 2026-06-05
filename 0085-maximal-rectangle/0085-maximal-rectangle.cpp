class Solution {
public:
int histogram(vector<int>& hist){
    vector<int>pse(hist.size());
    vector<int>nse(hist.size());
    stack<int>st;
    for(int i=0;i<hist.size();i++){
        while(!st.empty() && hist[st.top()]>=hist[i]){
            st.pop();
        }
        if(st.empty()){
            pse[i]=-1;
        }else{
            pse[i]=st.top();
        }
        st.push(i);
    }
    while(!st.empty()){
        st.pop();
    }
    for(int i=hist.size()-1;i>=0;i--){
        while(!st.empty() && hist[st.top()]>=hist[i]){
            st.pop();
        }
       if(st.empty()){
        nse[i]=hist.size();
       }else{
        nse[i]=st.top();
       }
       st.push(i);
    }
    int area = 0;
    for(int i=0;i<hist.size();i++){
        int len = nse[i]-pse[i]-1;
        area = max(area,len*hist[i]);
    }
    return area;
}
void converttohistogram(vector<int>& arr,vector<vector<int>>& ans,vector<vector<char>>& matrix){
    int m = matrix[0].size();
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]=='1'){
                arr[j]++;
            }else{
                arr[j]=0;
            }
        }
        ans.push_back(arr);
    }
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty())return 0;
        vector<vector<int>>ans;
        vector<int>arr(matrix[0].size(),0);
        converttohistogram(arr,ans,matrix);
        int area = 0;
       for(int i=0;i<matrix.size();i++){
        int ini = histogram(ans[i]);
        area = max(area,ini);
       }
       return area;
    }
};