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
void preorder(TreeNode* root, int depth , int &mdep){
    if(root==NULL){
        mdep = max(mdep,depth);
        return;
    }
    preorder(root->left,depth+1,mdep);
    preorder(root->right,depth+1,mdep);
}
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;
        if(root->right==NULL && root->left == NULL)return 1;
        int depth = 0;
        int mdep = 0;
        preorder(root,depth , mdep);
        return mdep;
    }
};