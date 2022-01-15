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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        while(head!=NULL and head->val==val)
        {
            head=head->next;
        }
        ListNode* ptr=head;
        ListNode* prev=NULL;
        while(ptr!=NULL)
        {
            if(ptr->val==val)
            {
                prev->next=ptr->next;
            }
            else
            {
                prev=ptr;
            }
            ptr=ptr->next;
        }
        return head;
    }
};