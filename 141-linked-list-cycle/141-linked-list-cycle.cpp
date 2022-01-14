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
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        unordered_set<ListNode*> s;
        ListNode* ptr=head;
        while(1)
        {
            if(ptr->next==NULL)
                return false;
            if(s.find(ptr->next)!=s.end())
            {
                return true;
            }
            s.insert(ptr->next);
            ptr=ptr->next;
        }
        return false;
    }
};