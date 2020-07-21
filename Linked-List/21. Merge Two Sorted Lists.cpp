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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode(-1);
        ListNode *t1=l1,*t2=l2,*t3=l3;
        while(t1 || t2){
            int x=INT_MAX,y=INT_MAX;
            if(t1){
                x=t1->val;
            }
            if(t2){
                y=t2->val;
            }
            if(x<=y){
                ListNode* t=new ListNode(x);
                t3->next=t;
                t3=t;
                t1=t1->next;
            }
            else{
                ListNode* t=new ListNode(y);
                t3->next=t;
                t3=t;
                t2=t2->next;
            }
        }
        return l3->next;
    }
};
