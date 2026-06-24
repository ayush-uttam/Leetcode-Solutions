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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr||head->next==nullptr)  return nullptr;
        ListNode *p=nullptr;
        ListNode *s=head;
        ListNode *f=head;
        while(f&&f->next){
            p=s;
            s=s->next;
            f=f->next->next;
        }
        ListNode *d=p->next;
        p->next=p->next->next;
        delete(d);
        return head;
    }
};