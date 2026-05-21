class Solution {
public:
using ll = long long;
double recur(double x ,ll n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return x;
    }
    if(n%2==0){
        return recur(x*x,n/2);
    }
   return x*recur(x,n-1);
}
double myPow(double x,ll n){
    ll num = n;
    if(num<0){
        return (1.0/recur(x,-num));
    }
    return recur(x,num);
}
};