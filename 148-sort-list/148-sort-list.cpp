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
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        ListNode* ptr=head;
        while(ptr!=NULL)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        sort(v.begin(),v.end());
        ptr=head;
        int i=0;
        while(ptr!=NULL)
        {
            ptr->val=v[i];
            i++;
            ptr=ptr->next;
        }
        return head;
    }
};