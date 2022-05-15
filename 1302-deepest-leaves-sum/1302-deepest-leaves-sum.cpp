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
public:
    int ans=0;
    int deepestLeavesSum(TreeNode* root) {
        int height_tree=maxHeight(root);
        ans_sum(root, 1, height_tree);
        return ans;
    }
    
    int maxHeight(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return 1+max(maxHeight(root->left),maxHeight(root->right));
    }
    
    void ans_sum(TreeNode* root, int height, int max_height)
    {
        if(root==NULL)
            return;
        if(height==max_height)
        {
            ans+=root->val;
        }
        ans_sum(root->left, height+1, max_height);
        ans_sum(root->right, height+1, max_height);
    }
};