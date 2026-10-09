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
    stack<int>st1,st2,st3;
    stack<int>res;
    Node* t1=h1;
    Node* t2=h2;
    while(t1){
        st1.push(t1->data);
        t1=t1->next;
    }
    while(t2){
        st2.push(t2->data);
        t2=t2->next;
    }
    int a,b,c=0,s;
    while(!st1.empty()||!st2.empty()){
        a=0,b=0;
        if(!st1.empty()){
            a=st1.top();
            st1.pop();
        }
        if(!st2.empty()){
            b=st2.top();
            st2.pop();
        }
        s=a+b+c;
        c=s/10;
        s%=10;
        st3.push(s);
    }
    if(c)   st3.push(c);
    Node *d=new Node(0);
    Node *t=d;
    while(!st3.empty()){
        t->next=new Node(st3.top());
        t=t->next;
        st3.pop();
    }
    return d->next;
}
};