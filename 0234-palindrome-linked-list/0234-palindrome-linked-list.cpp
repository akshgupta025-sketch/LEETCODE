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
ListNode* reverse(ListNode* head){
   if(head==NULL||head->next==NULL){
    return head;
   }
    ListNode* newhead = reverse(head->next);
    ListNode* front = head->next;
    front->next = head;
    head->next = NULL;
    return newhead;
}
    bool isPalindrome(ListNode* head) {
        // ListNode* temp = head;
        // stack<int>st;
        // while(temp){
        //     st.push(temp->val);
        //     temp=temp->next;
        // }
        // temp = head;  NORMLA BRUTE FORCE STORE IN STCAK THEN CHECK
        // while(temp){
        //     if(temp->val!=st.top()){
        //         return false;
        //     }else{
        //         st.pop();
        //         temp=temp->next;
        //     }
        // }
        // return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev = reverse(slow);
         ListNode* temp = head;
         ListNode* sec = prev;
         while(sec!=NULL){
            if(temp->val!=sec->val){
                return false;
            }else{
                temp=temp->next;
                sec=sec->next;
            }
         }
         return true;
    }
};