class Solution {
public:
bool function(vector<int>position,int mid , int m){
    int n = position.size();
    int cnt = 1;
    int last = position[0];
    for(int i=1;i<n;i++){
        if(abs(position[i]-last)>=mid){
            cnt++;
            last = position[i];
        }
    }
    if(cnt>=m){
        return true;
    }else{
        return false;
    }
}
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(),position.end());
        int low = 1;
        int high = position[n-1]-position[0];
        while(low<=high){
            int mid = (low+high)/2;
            if(function(position,mid,m)==true){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return high;
    }
};