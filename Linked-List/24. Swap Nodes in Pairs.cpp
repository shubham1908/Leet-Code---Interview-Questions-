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
    ListNode* swapPairs(ListNode* head) {
        ListNode* node = new ListNode();
        node->next = head;
        head = node;
        while(node-> != NULL && node->next->next != NULL){
            ListNode *temp = node->next->next->next, *x = node; 
            
            // swap(node->next, node->next->next)
            ListNode *a = node->next;
            node->next = node->next->next;   
            node->next->next = a;
            a->next = temp;
            node = x->next->next;
        }
        return head->next;
    }
};
