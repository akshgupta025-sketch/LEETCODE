/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void postorder(TreeNode*root,vector<tuple<int,int,int>>&ans,int row,int col){
    if(root==NULL){
        return;
    }
    ans.push_back({col,row,root->val});
    postorder(root->left,ans,row+1,col-1);
    postorder(root->right,ans,row+1,col+1);
}
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<tuple<int,int,int>>ans;
        postorder(root,ans,0,0);
       sort(ans.begin(),ans.end());
       vector<vector<int>>result;
       int prev = INT_MIN;
       for(auto t:ans){
        int col = get<0>(t);
        int row = get<1>(t);
        int val = get<2>(t);
        if(col!=prev){
            result.push_back(vector<int>());
            prev = col;
        }
        result.back().push_back(val);
       }
       return result;
    }
};