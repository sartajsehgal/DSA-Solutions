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
        unordered_map<int,int> mp;
        ListNode *ptr=head;
        while(ptr!=NULL)
        {
            mp[ptr->val]++;
            ptr=ptr->next;
        }
        ListNode *root = new ListNode();
        root->next=head;
        ListNode *prev=root,*nxt=root;
        ptr=head;
        while(ptr!=NULL)
        {
            if(mp[ptr->val]>1)
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