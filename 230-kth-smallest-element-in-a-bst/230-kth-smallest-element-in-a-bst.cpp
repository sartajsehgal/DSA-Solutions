/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    priority_queue<int> pq;
    int i;
public:
    int kthSmallest(TreeNode* root, int k) {
        i=0;
        inorder(root,k);
        return pq.top();
    }
    
    void inorder(TreeNode* root, int k)
    {
        if(root==NULL)
            return;
        inorder(root->left,k);
        if(i<k)
        {
            pq.push(root->val);
            i++;
        }
        else
        {
            if(root->val<pq.top())
            {
                pq.pop();
                pq.push(root->val);
            }
        }
        inorder(root->right,k);
    }
};