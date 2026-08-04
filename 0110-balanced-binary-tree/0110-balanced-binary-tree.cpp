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
    int height(TreeNode* root){
        if(root==NULL){
          return 0;
        }
        int l = height(root->right);
        int r = height(root->left);
        return 1+max(l,r);
    }
    void preorder(TreeNode* root,int &x){
        if(root==NULL){
            return;
        }
        
        if(abs(height(root->left)-height(root->right))>1){
            x=1;
        }
        preorder(root->left,x);
        preorder(root->right,x);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
         int x = 0;
         preorder(root,x);
         if(x==1)return false;
         return true;
    }
};