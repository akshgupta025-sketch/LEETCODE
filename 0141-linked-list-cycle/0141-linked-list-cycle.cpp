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
    bool hasCycle(ListNode *head) {
        // APPROACH -1 STORING VISITING NODES IN MAP AND CHECKING 
        // ListNode* temp = head;
        // unordered_map<ListNode*,int>mp;
        // while(temp){
        //     if(mp.find(temp)!=mp.end()){ 
        //         return true;
        //     }else{
        //         mp[temp]=1;
        //         temp=temp->next;
        //     }
        // }
        // return false;
        // APPROACH -2 TORTOISE HARE ALGO SLOW AND FAST
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                return true;
            }
        }
        return false;  
    }
};