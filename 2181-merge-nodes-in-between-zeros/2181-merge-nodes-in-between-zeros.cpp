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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy= new ListNode();
        ListNode* r=dummy;
        ListNode* temp=head->next;
        int s=0;
        while(temp!=nullptr){
            if(temp->val==0){
                r->next=new ListNode(s);
                s=0;
                r=r->next;
                temp=temp->next;
                continue;
            }
            s+=temp->val;
            temp=temp->next;
        }
        return dummy->next;
    }
};