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
    ListNode* mergeKLists(vector<ListNode*>& l) {
        int n=l.size();
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<n;i++){
            while(l[i]){
                q.push(l[i]->val);
                l[i]=l[i]->next;
            }
        }
        ListNode* L=new ListNode(-1);
        ListNode* T=L;
        while(q.size()){
            ListNode* temp=new ListNode(q.top());
            q.pop();
            T->next=temp;
            T=temp;
        }
        return L->next;
    }
};
