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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *root=new ListNode(0,head);
        ListNode *k_from_beg=root;
        ListNode *k_from_end=root;
        ListNode *fast=head;
        for(int i=1;i<k;i++)
        {
            k_from_beg=k_from_beg->next;
            fast=fast->next;
        }
        while(fast->next!=NULL)
        {
            fast=fast->next;
            k_from_end=k_from_end->next;
        }
        int val=k_from_beg->next->val;
        k_from_beg->next->val=k_from_end->next->val;
        k_from_end->next->val=val;
        return head;
        
    }
};