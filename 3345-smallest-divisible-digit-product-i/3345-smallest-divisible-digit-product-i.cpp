class Solution {
public:
   bool digit_div(int n,int t){
    int prdct = 1;
    while(n>0){
        int r = n%10;
        prdct*=r;
        n=n/10;
    }
    return prdct%t==0;
   }
    int smallestNumber(int n, int t) {
        while(1){
            if(digit_div(n,t))break;
            n=n+1;
        }
        return n;
    }
};