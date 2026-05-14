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
  ListNode* recursive(ListNode*head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    ListNode* newhead = recursive(head->next);
    ListNode* front = head->next;
    front->next = head;
    head->next = NULL;
    return newhead;
  }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        // stack<int>st;
        // ListNode* temp = head;
        // while(temp!=NULL){     BRUTE FORCE METHOD USING STACKS
        //  st.push(temp->val);
        //  temp=temp->next;
        // }
        // temp = head;
        // while(temp!=NULL){
        //     temp->val = st.top();
        //     st.pop();
        //     temp=temp->next;
        // }
        // return head;
        // OPTIMAL METHOD : REVERSING NEXT NODE AND MOVING HEAD
        // ListNode* prev = NULL;
        // ListNode* temp = head;
        // while(temp!=NULL){
        //     ListNode* front = temp->next;
        //     temp->next = prev;
        //     prev = temp;
        //     temp = front;  REVERSING THE NEXT AND USING PREV AS NEW HEAD
        // }
        // return prev; 
        // RECURSIVE WAY
        return recursive(head);
    }
};