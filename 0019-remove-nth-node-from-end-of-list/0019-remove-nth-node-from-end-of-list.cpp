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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0,head);
         ListNode* slow = dummy;
        ListNode* fast = dummy;
        int cnt = 0;
        while(cnt!=n+1){
            cnt++;
            fast = fast->next;
        }
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* dl = slow->next;
        slow->next = slow->next->next;
        delete dl;
        return dummy->next;
    }
};