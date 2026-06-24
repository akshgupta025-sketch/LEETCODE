class StockSpanner {
public:
   vector<int>ans;
   stack<pair<int,int>>st;
    StockSpanner() {
     
    }
    
    int next(int price) {
         ans.push_back(price);
          int i = ans.size()-1;
         while(!st.empty() && st.top().first<=price){
            st.pop();
         }
        int span;
    if (st.empty())
        span = i + 1;
    else
        span = i - st.top().second;

    st.push({ans[i],i});
    return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */