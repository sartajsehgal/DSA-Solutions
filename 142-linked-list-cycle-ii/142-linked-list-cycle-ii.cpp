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
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> s;
        ListNode* ptr=head;
        while(ptr!=NULL and s.find(ptr)==s.end())
        {
            s.insert(ptr);
            ptr=ptr->next;
        }
        if(ptr!=NULL)
            return ptr;
        return NULL;
    }
};