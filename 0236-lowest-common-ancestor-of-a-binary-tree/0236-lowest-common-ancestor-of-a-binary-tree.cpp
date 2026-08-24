/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool traverse1(TreeNode* root, TreeNode* p, vector<TreeNode*>& arr1){
        if(root==NULL)return false;
              arr1.push_back(root);
        if(root==p ){
            return true;
        }
      if(traverse1(root->left,p,arr1)||
        traverse1(root->right,p,arr1)) return true;
        arr1.pop_back();
        return false;
    }
    bool traverse2(TreeNode* root, TreeNode* q, vector<TreeNode*>& arr2){
        if(root==NULL)return false;
          arr2.push_back(root);
        if(root==q){
            return true;
        }
       if(traverse2(root->left,q,arr2)||
        traverse2(root->right,q,arr2))return true;
        arr2.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>arr1;
        vector<TreeNode*>arr2;
        traverse1(root,p,arr1);
        traverse2(root,q,arr2);
        int i = 0;
        TreeNode* lca = NULL;
        while(i<arr1.size() && i<arr2.size()){
             if(arr1[i]!=arr2[i]){
                break;
             }
             lca = arr1[i];
             i++;
        }
        return lca;
    }
};