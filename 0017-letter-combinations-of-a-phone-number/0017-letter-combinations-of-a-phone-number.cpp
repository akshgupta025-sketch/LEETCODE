class Solution {
public:
   void recur(int i,string output,string digits,string map[],vector<string>& ans){
    if(i>=digits.length()){
        ans.push_back(output);
        return;
    }
    int value = digits[i]-'0';
    string initial = map[value];
    for(int idx=0;idx<initial.length();idx++){
       output.push_back(initial[idx]);
       recur(i+1,output,digits,map,ans);
       output.pop_back();
    }
   }
    vector<string> letterCombinations(string digits) {
    vector<string>ans;
    if(digits.size()==0){
        return ans;
    }
    string output;
    string map[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    recur(0,output,digits,map,ans);
    return ans;
    }
};