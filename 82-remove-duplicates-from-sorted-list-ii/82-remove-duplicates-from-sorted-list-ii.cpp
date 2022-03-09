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
        ListNode *root=new ListNode(0,head);
        ListNode *ptr=head,*prev=root,*nxt=root;
        while(ptr!=NULL)
        {
            bool flag=false;
            while(ptr->next!=NULL and ptr->val==ptr->next->val)
            {
                ptr=ptr->next;
                flag=true;
            }
            if(flag)
            {
                nxt=ptr->next;
                prev->next=nxt;
                ptr=nxt;
            }
            else
            {
                ptr=ptr->next;
                prev=prev->next;
            }
        }
        return root->next;
    }
};