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
        if(head==NULL or head->next==NULL)
            return head;
        ListNode* first=head;
        ListNode* second=head->next;
        ListNode* prev=NULL;
        head=second;
        while(1)
        {
            first->next=second->next;
            second->next=first;
            if(prev!=NULL)
            {
                prev->next=second;
            }
            prev=first;
            if(first->next==NULL or first->next->next==NULL)
            {
                break;
            }
            else
            {
                first=first->next;
                second=first->next;
            }
        }
        return head;
    }
};