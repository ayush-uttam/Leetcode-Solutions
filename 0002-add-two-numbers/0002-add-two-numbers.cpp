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
    Node* addTwoNumbers(Node* h1, Node* h2){
    Node* t1=h1;
    Node* t2=h2;
    Node* d=new Node(0);
    Node* t=d;
    int a,b,c=0;
    while(t1||t2){
        a=0;
        b=0;
        if(t1){
            a=t1->data;
            t1=t1->next;
        }
        if(t2){
            b=t2->data;
            t2=t2->next;
        }
        int s=a+b+c;
        c=s/10;
        s%=10;
        d->next=new Node(s);
        d=d->next;
    }
    if(c){
        d->next=new Node(c);
        d=d->next;
    }
    return t->next;
}
};