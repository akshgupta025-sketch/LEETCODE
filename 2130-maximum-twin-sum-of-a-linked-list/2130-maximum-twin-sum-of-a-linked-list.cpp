/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        vector<int>ans;
        while(temp){
          ans.push_back(temp->val);
          temp=temp->next;
        }
        int maxu = 0;
        int left = 0;
        int right = ans.size()-1;
        while(left<right){
          maxu = max(maxu,ans[left]+ans[right]);
          left++;
          right--;
        }
        return maxu;
    }
};