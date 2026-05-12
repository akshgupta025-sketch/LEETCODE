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
   int length(ListNode* head){
    int cnt = 0;
    ListNode* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
   }
    ListNode* middleNode(ListNode* head) {
        int len = length(head);
        int mid = len/2;
        while(mid--){
            head=head->next;
        }
        return head;
    }
};