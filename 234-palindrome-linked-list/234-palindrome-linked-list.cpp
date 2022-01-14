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
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* ptr=head;
        while(ptr!=NULL)
        {
            arr.push_back(ptr->val);
            ptr=ptr->next;
        }
        for(int i=0;i<arr.size()/2;i++)
        {
            if(arr[i]!=arr[arr.size()-1-i])
                return false;
        }
        return true;
    }
};