class Solution {
public:
bool recur(vector<vector<char>>& board,string word,int i,int j,int k){
    if(k>=word.size())return true;
    int n = board.size();
    int m = board[0].size();
    if(i<0||i>=n||j<0||j>=m||board[i][j]=='.'||board[i][j]!=word[k])return false;
    if(word.size()==1 && board[i][j]==word[k])return true;
    bool temp = false;
    board[i][j]='.';
    int x[4] = {0,1,0,-1};
    int y[4] = {1,0,-1,0};
    for(int idx = 0;idx<4;idx++){
     temp = temp||recur(board,word,i+x[idx],j+y[idx],k+1);
    }
    board[i][j]=word[k];
    return temp;
}
    bool exist(vector<vector<char>>& board, string word) {
        if(board.size()==0)return false;
        if(word.size()==0)return false;
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                   if(recur(board,word,i,j,0))return true;;
                }
            }
        }
        return false;
    }
};