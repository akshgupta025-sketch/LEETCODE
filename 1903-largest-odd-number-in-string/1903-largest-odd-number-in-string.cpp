class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
       int left = 0;
       int right = n-1;
       string s ="";
       while(right>=0){
        if(num[right]%2==0){
            right--;
        }else{
            break;
       }
       }
       for(int i=left;i<=right;i++){
        s+=num[i];
       }
       return s;
    }
};