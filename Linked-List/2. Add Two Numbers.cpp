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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0,c=0;
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* t3=new ListNode(-1);
        ListNode* l3=t3;
        while(t1 || t2 || c){
            sum=0;
            if(t1){
                sum+=t1->val;
                t1=t1->next;
            }
            if(t2){
                sum+=t2->val;
                t2=t2->next;
            }
            sum+=c;
            c=sum/10;
            sum%=10;
            // cout<<sum<<' ';
            ListNode* t=new ListNode(sum);
            // cout<<t->val<<' ';
            t3->next=t;
            t3=t;
        }
        return l3->next;
    }
    
};
