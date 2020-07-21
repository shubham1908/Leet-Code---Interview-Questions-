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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* ahead=new ListNode(-1);
        ahead->next=head;
        ListNode* temp=ahead;
        while(temp!=NULL){
            if(temp->next!=NULL && temp->next->val==val){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
        return ahead->next;
    }
};
