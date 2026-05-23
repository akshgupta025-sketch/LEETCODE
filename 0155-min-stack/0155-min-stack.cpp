class MinStack {
    stack<int>st;
    stack<int>minst;
    // USING ANOTHER STACK MINST-TO TAKE MIN VALUE UPDATING PUSH AND POP TIME LIKE
    // AT POP TIME IF MIN(TOP MINSTACK) IS REMOVING THEN REMOVE FROM BOTH SC-O(N)
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minst.empty()||val<=minst.top()){
            minst.push(val);
        }
    }
    
    void pop() {
        if(st.top()==minst.top()){
            minst.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */