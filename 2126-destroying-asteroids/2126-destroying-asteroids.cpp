class Solution {
public:
using ll = long long;
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        ll sum = mass;
        ll n = asteroids.size();
        for(int i=0;i<n;i++){
              if(asteroids[i]>sum){
                return false;
              }else{
                sum=sum+asteroids[i];
              }
        }
        return true;
    }
};