/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *root=new Node(0);
        unordered_map<int,Node*> umap;
        unordered_map<Node*,int> umap1;
        Node *ptr1=head;
        Node *ptr2=root;
        int i=0;
        while(ptr1!=NULL)
        {
            Node *temp=new Node(ptr1->val);
            ptr2->next=temp;
            umap[i]=temp;
            umap1[ptr1]=i;
            i++;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        ptr1=head;
        ptr2=root->next;
        while(ptr1!=NULL)
        {
            if(ptr1->random!=NULL)
            {
                ptr2->random=umap[umap1[ptr1->random]];
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        //cout<<head->next->next->random<<endl;
        return root->next;
    }
};