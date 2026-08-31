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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>crt;
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* baad = temp->next;
        int cnt = 0;
        while( baad!=NULL){
             if(prev!=NULL ){
                if((temp->val>prev->val && temp->val>baad->val)||(temp->val<prev->val && temp->val<baad->val)){
                    crt.push_back(cnt);
                }
             }
             prev = temp;
             temp = baad;
             baad=baad->next;
             cnt++;
        }
        if(crt.size()<2)return {-1,-1};
       int mind = INT_MAX;
       for(int i=1;i<crt.size();i++){
        mind=min(mind,crt[i]-crt[i-1]);
       }
       return {mind,crt.back()-crt.front()};
    }
};