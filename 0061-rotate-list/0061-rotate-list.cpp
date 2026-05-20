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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        // OPTIMAL APPROACH
        // MAKE CIRCULAR LL
        // NEW TAIL = LENGTH-(K%L)
        // NODE NEXT = HEAD
        int len = 1;
        ListNode* temp = head;
        while(temp->next){
            len++;
            temp=temp->next;
        }
        temp->next = head;
       len = (len-(k%(len)))-1;
       temp = head;
       while(len>0){
        len--;
        temp = temp->next;
       }
       ListNode* front = temp->next;
       temp->next = NULL;
       return front;
    }
};