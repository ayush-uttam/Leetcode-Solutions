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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        stack<int>st;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        int r=0,p=0;
        while(!st.empty()){
            r+=st.top()*(int)(pow(2,p++));
            st.pop();
        }
        return r;
    }
};