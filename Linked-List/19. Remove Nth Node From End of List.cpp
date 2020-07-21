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
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int x=0;
        ListNode *temp1 = head, *temp2 = head;
        if(temp1->next==NULL){
            head = head->next;
            return head;
        }
        for(int i=0;i<n;i++){
            temp1=temp1->next;
        }
        if(temp1==NULL){
            head = head->next;
            return head;
        }
        temp1 = temp1->next;
        while(temp1!=NULL){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        temp2->next = temp2->next->next;
        return head;
    }
};
