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
    int maxlen(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int r = maxlen(root->left);
        int j = maxlen(root->right);
        return 1+max(r,j);
    }
    void preorder(TreeNode* root, int &d){
        if(root==NULL){
            return;
        }
        d = max(d,maxlen(root->left)+maxlen(root->right));
        preorder(root->left,d);
        preorder(root->right,d);
    }
    int diameterOfBinaryTree(TreeNode* root) {
       int d = 0;
       preorder(root,d);
        return d;
    }
};