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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *pre = NULL, *next = NULL, *cur = head;
        for(int i = 0; i < m-1; i++){
            pre = cur;
            cur = cur->next;
        }
        ListNode *x = NULL, *y = cur;
        for(int i = m; i <= n; i++){
            next = cur->next;
            cur->next = x;
            x = cur;
            cur = next;
        }
        y->next = cur;
        if(pre == NULL){
            head = x;
            return head;
        }
        pre->next = x;
        return head;
    }
};
