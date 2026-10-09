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

#define Node ListNode
#define data val

class Solution {
public:
    Node* reverseBetween(Node* head, int left, int right) {
    stack<int>st;
    Node* t=head;
    for(int i=1;i<left;i++){
        t=t->next;
    }
    Node *t1=t;
    for(int i=left;i<=right;i++){
        st.push(t->data);
        t=t->next;
    }
    t=t1;
    for(int i=left;i<=right;i++){
        t->data=st.top();
        st.pop();
        t=t->next;
    }
    return head;
}

};