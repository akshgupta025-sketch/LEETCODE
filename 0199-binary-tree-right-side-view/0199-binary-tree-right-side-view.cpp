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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>arr;
        if(root==NULL){
            return arr;
        }
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            for(int i=0;i<s;i++){
                TreeNode* x = q.front();
                if(i==s-1){
                    arr.push_back(x->val);
                }
                q.pop();
                if(x->left!=NULL)q.push(x->left);
                if(x->right!=NULL)q.push(x->right);
            }
        }
        return arr;
    }
};