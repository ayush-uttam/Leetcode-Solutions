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
    ListNode* reverseKGroup(ListNode* head, int k) {
       stack<int>s;
       ListNode* temp=head;
       ListNode* t=head;
       int c=0;
       while(temp){
        s.push(temp->val);
        c++;
        if(c==k){
            while(!s.empty()){
                t->val=s.top();
                s.pop();
                t=t->next;
            }
            c=0;
        }
        temp=temp->next;
       }
       return head; 
    }
};