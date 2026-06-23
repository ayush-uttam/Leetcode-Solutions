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
    ListNode* atHead(ListNode*head){
        ListNode* t=head->next;
        delete(head);
        return t;
    }
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr)   return nullptr;
        ListNode *temp=head;
        while(temp&&temp->val==val){
            temp=atHead(temp);
        }
        head=temp;
        while(temp&&temp->next){
            if(temp->next->val==val){
                ListNode* t=temp->next;
                temp->next=temp->next->next;
                delete(t);
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};