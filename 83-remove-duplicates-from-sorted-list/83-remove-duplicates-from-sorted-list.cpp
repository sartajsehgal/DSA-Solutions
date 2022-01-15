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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL or head->next==NULL)
            return head;
        ListNode* ptr=head;
        ListNode* slow=head;
        while(ptr!=NULL)
        {
            if(ptr->val==slow->val)
            {
                ptr=ptr->next;
            }
            else
            {
                slow->next=ptr;
                slow=slow->next;
                ptr=ptr->next;
            }
        }
        if(slow->next!=NULL)
            slow->next=NULL;
        return head;
    }
};