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
// void preorder(TreeNode* p,vector<int>& arr){
//     if(p==NULL){
//         arr.push_back(1e9);
//         return;
//     }
//     arr.push_back(p->val);
//     preorder(p->left,arr);
//     preorder(p->right,arr);
// }
    bool isSameTree(TreeNode* p, TreeNode* q) {
//         vector<int>arr1;
//         vector<int>arr2;
//         preorder(p,arr1);
//         preorder(q,arr2);
//         int x = 0;
//         int y = 0;
//         int k = 1;
//         if(arr1.size()!=arr2.size())return false;
//         while(x<arr1.size()&& y<arr2.size()){
//             if(arr1[x]!=arr2[y]){
//                 k = 0;
//                 break;
//             }
//             x++;
//             y++;
//         }
//         if(k==0){
//             return false;
//         }
//         return true;
if(p==NULL && q==NULL)return true;
if(p==NULL||q==NULL)return false;
return(p->val==q->val)&&isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }
};