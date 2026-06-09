class Solution {
public:
bool is_exist(int row,int col,vector<string>& board,int n){
    int duprow = row;
    int dupcol = col;
    while(row>=0 && col>=0){
        if(board[col][row]=='Q')return false;
        row--;
        col--;
    }
    row = duprow;
    col = dupcol;
    while(col>=0){
        if(board[col][row]=='Q')return false;
        col--;
    }
    row = duprow;
    col = dupcol;
    while(row<n && col>=0){
        if(board[col][row]=='Q')return false;
        row++;
        col--;
    }
    return true;
}
void recur(int col,int &cnt,vector<string>& board,int n){
    if(col==n){
        cnt++;
        return;
    }
    for(int row =0;row<n;row++){
        if(is_exist(row,col,board,n)){
            board[col][row]='Q';
            recur(col+1,cnt,board,n);
            board[col][row]='.';
        }
    }
}
    int totalNQueens(int n) {
        int cnt = 0;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
          board[i]=s;
        }
        recur(0,cnt,board,n);
        return cnt;
    }
};