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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head=new ListNode();
        ListNode *ptr1=l1,*ptr2=l2,*ptr3=head;
        int carry=0;
        while(ptr1!=NULL and ptr2!=NULL)
        {
            int sum = ptr1->val+ptr2->val+carry;
            int nsum = sum%10;
            sum/=10;
            carry=sum%10;
            ListNode *temp = new ListNode(nsum);
            ptr3->next=temp;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
            ptr3=ptr3->next;
        }
        while(ptr1!=NULL)
        {
            int sum=ptr1->val+carry;
            int nsum = sum%10;
            sum/=10;
            carry=sum%10;
            ListNode *temp = new ListNode(nsum);
            ptr3->next=temp;
            ptr1=ptr1->next;
            ptr3=ptr3->next;
        }
        while(ptr2!=NULL)
        {
            int sum=ptr2->val+carry;
            int nsum = sum%10;
            sum/=10;
            carry=sum%10;
            ListNode *temp = new ListNode(nsum);
            ptr3->next=temp;
            ptr2=ptr2->next;
            ptr3=ptr3->next;
        }
        if(carry>0)
        {
            ListNode *temp = new ListNode(carry);
            ptr3->next=temp;
        }
        return head->next;
    }
};