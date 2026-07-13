class Solution {
public:
 
  
    vector<int> sequentialDigits(int low, int high) {
        vector<int>arr;
       for(int i=1;i<=9;i++){
        int num = i;
        for(int j=i+1;j<=9;j++){
            num=10*num+j;
            if(num>=low && num<=high){
                arr.push_back(num);
            }
        }
       }
        sort(arr.begin(),arr.end());
        return arr;
    }
};