class Solution {
public:
    int winner(int x ,int y,int cnt,int turn){
        if(x<0 || y<0) return cnt;
        if(turn==0){
            return winner(x-1,y-4,cnt+1,1);
        }
        return winner(x-1,y-4,cnt+1,0);
    }
    string winningPlayer(int x, int y) {
        int ans  = winner(x,y,0,0);
        if(ans%2==0){
            return "Alice";
        }
        return "Bob";
    }
};