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
    vector<int> nodes;
public:
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        TreeNode *root1=new TreeNode(0);
        TreeNode *ptr=root1;
        for(int node:nodes)
        {
            ptr->right=new TreeNode(node);
            ptr=ptr->right;
        }
        return root1->right;
    }
    
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        inorder(root->left);
        nodes.push_back(root->val);
        inorder(root->right);
    }
};