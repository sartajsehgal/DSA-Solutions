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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return head;
        ListNode *dummy = new ListNode();
        ListNode *ptr = head;
        vector<int> arr;
        while(ptr!=NULL)
        {
            arr.push_back(ptr->val);
            ptr=ptr->next;
        }
        int len=arr.size();
        k=k%len;
        for(int i=0;i<k;i++)
        {
            int a=arr.back();
            arr.pop_back();
            arr.insert(arr.begin(),a);
        }
        ptr=dummy;
        for(int i=0;i<arr.size();i++)
        {
            ListNode *temp=new ListNode(arr[i]);
            ptr->next=temp;
            ptr=ptr->next;
        }
        return dummy->next;
    }
};