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
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = NULL, *next = NULL;
        ListNode *cur = head;
        while(cur!=NULL){
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        head = pre;
        return head;
    }
};
