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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
    //     // USING 2 STACKS 
    //   stack<TreeNode*>st1;
    //   stack<TreeNode*>st2;
    //   st1.push(root);
    //   while(!st1.empty()){
    //     TreeNode*y= st1.top();
    //     st1.pop();
    //     st2.push(y);
    //     if(y->left!=NULL) st1.push(y->left);
    //     if(y->right!=NULL) st1.push(y->right);
    //   }
    //   while(!st2.empty()){
    //     TreeNode* x = st2.top();
    //     st2.pop();
    //     ans.push_back(x->val);
    //   }
    //   return ans;
    stack<TreeNode*>st;
    TreeNode* cur = root;
    while(cur!=NULL||!st.empty()){
        if(cur!=NULL){
            st.push(cur);
            cur=cur->left;
        }else{
            TreeNode* temp = st.top()->right;
            if(temp==NULL){
                temp = st.top();
                st.pop();
                ans.push_back(temp->val);
                while(!st.empty() && temp == st.top()->right){
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->val);
                }
            }else{
                cur = temp;
            }
        }
    }
    return ans;
    }
    
};