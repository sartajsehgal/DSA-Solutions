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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> nodes;
        ListNode *ptr=head;
        while(ptr!=NULL)
        {
            nodes.push_back(ptr->val);
            ptr=ptr->next;
        }
        for(int i=0;i<nodes.size();i+=k)
        {
            reverse(nodes.begin()+i,(nodes.begin()+i+k<=nodes.end()?nodes.begin()+i+k:nodes.begin()+i));
        }
        ListNode *head1=new ListNode(nodes[0]);
        ptr=head1;
        for(int i=1;i<nodes.size();i++)
        {
            
            ListNode *temp=new ListNode(nodes[i]);
            ptr->next=temp;
            ptr=ptr->next;
        }
        return head1;
    }
};