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
void left_traversal(TreeNode* x,vector<int>& left){
    if(x==NULL){
        left.push_back(-120);
        return;
    }
    left.push_back(x->val);
    left_traversal(x->left,left);
    left_traversal(x->right,left);
}
void right_traversal(TreeNode* x,vector<int>& right){
if(x==NULL){
        right.push_back(-120);
        return;
    }
    right.push_back(x->val);
    right_traversal(x->right,right);
    right_traversal(x->left,right);
}
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
        if(root->left==NULL && root->right==NULL)return true;
     if(root->left==NULL || root->right==NULL)return false;
       vector<int>left;
       vector<int>right;
       left_traversal(root->left,left);
       right_traversal(root->right,right);
       for(int i=0;i<right.size();i++){
        if(left[i]!=right[i]){
            return false;
        }
       }
       return true;
    }
};