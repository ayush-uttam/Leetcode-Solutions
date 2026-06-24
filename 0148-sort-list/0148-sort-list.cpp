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
    ListNode* twoSort(ListNode* h1, ListNode*h2){
        ListNode* t1=h1;
        ListNode* t2=h2;
        ListNode* dummy = new ListNode(0);
        ListNode* temp=dummy;
        while(t1&&t2){
            if(t1->val<t2->val){
                dummy->next=t1;
                t1=t1->next;
            }
            else{
                dummy->next=t2;
                t2=t2->next;
            }
            dummy=dummy->next;
        }
        dummy->next=t1?t1:t2;
        return temp->next;
    }
    ListNode* middle(ListNode* head){
        ListNode* s=head;
        ListNode* f=head->next;
        while(f&&f->next){
            s=s->next;
            f=f->next->next;
        }
        return s;
    }
    ListNode* sortList(ListNode* head) {
        if(head==nullptr||head->next==nullptr)  return head;
        ListNode* mid=middle(head);
        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=nullptr;
        left=sortList(left);
        right=sortList(right);
        return twoSort(left,right);
    }
};