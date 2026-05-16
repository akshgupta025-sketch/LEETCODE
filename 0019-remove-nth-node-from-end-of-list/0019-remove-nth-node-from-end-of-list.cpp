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
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = length(head);
        if(n==l){
            ListNode* newhead = head->next;
            delete head;
            return newhead;
        }
        int cnt = 1;
        ListNode* temp = head;
        while(temp!=NULL){
            if(cnt==l-n){
             ListNode* delnode = temp->next;
             temp->next = temp->next->next;
             delete delnode;
             break;
            }else{
                cnt++;
                temp = temp->next;
             
            }
        }
        return head;
    }
};