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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int>mpp;
        ListNode* temp=head;
        while(temp){
            if(mpp.find(temp)==mpp.end()){
                mpp[temp]=1;
            }
            else{
                break;
            }
            temp=temp->next;
        }
        return temp;
    }
};