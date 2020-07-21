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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0 || head == NULL){
            return head;
        }
        int n=0;
        ListNode *temp = head, *pre=NULL;
        while(temp != NULL){
            pre = temp;
            temp = temp->next;
            n++;
        }
        pre->next = head;
        k = k % n;
        temp = head;
        for(int i=0;i<n-k;i++){
            pre = temp;
            temp = temp->next;
        }
        pre->next = NULL;
        head = temp;
        return head;
    }
};
