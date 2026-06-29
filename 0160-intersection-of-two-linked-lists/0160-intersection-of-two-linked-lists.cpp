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
        ListNode* t1=headA;
        ListNode* t2=headB;
        while(t1&&t2){
            if(t1==t2)  return t1;
            if(t1->next==nullptr){
                t1=headB;
                t2=t2->next;
                continue;
            }
            if(t2->next==nullptr){
                t2=headA;
                t1=t1->next;
                continue;
            }
            t1=t1->next;
            t2=t2->next;
        }
        return nullptr;
    }
};