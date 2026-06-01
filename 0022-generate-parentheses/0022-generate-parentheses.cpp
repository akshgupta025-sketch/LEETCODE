class Solution {
public:
bool isvalid(string s){
    int balance = 0;
    for(char c:s){
        if(c=='(')balance++;
        else balance--;
        if(balance<0)return false;
    }
    return balance==0;
}
  void generateALL(string curr,int n,vector<string>& ans){
    if(curr.size()==2*n){
        if(isvalid(curr))ans.push_back(curr);
        return;
    }
    generateALL(curr+'(',n,ans);
    generateALL(curr+')',n,ans);
  }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        generateALL("",n,ans);
        return ans;
    }
};