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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=new ListNode();
        ListNode *ptr1=list1,*ptr2=list2,*ptr3=head;
        while(ptr1!=NULL and ptr2!=NULL)
        {
            ListNode* temp=new ListNode();
            if(ptr1->val<ptr2->val)
            {
                temp->val=ptr1->val;
                ptr1=ptr1->next;
            }
            else
            {
                temp->val=ptr2->val;
                ptr2=ptr2->next;
            }
            ptr3->next=temp;
            ptr3=ptr3->next;
        }
        while(ptr1!=NULL)
        {
            ListNode* temp=new ListNode();
            temp->val=ptr1->val;
            ptr1=ptr1->next;
            ptr3->next=temp;
            ptr3=ptr3->next;
        }
        while(ptr2!=NULL)
        {
            ListNode* temp=new ListNode();
            temp->val=ptr2->val;
            ptr2=ptr2->next;
            ptr3->next=temp;
            ptr3=ptr3->next;
        }
        return head->next;
    }
};