/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
       map<ListNode*,int>mp;
        while(tempA){
            mp[tempA]=1;
            tempA=tempA->next;
        }
        while(tempB){
            if(mp.find(tempB)!=mp.end()){
                return tempB;
            }else{
                tempB=tempB->next;
            }
        }
        return NULL;
    }
};