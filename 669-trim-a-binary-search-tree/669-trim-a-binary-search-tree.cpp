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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root==NULL)
            return root;
        if(root->val>high)
            return trimBST(root->left,low,high);
        if(root->val<low)
            return trimBST(root->right,low,high);
        root->left=trimBST(root->left,low,high);
        root->right=trimBST(root->right,low,high);
        return root;
    }
};



/*
if(root==NULL)
            return root;
        trimBST(root->left,low,high);
        trimBST(root->right,low,high);
        if(root->val==low)
        {
            root->left=NULL;
        }
        if(root->val==high)
        {
            root->right=NULL;
        }
        if(root->left!=NULL and root->left->val<low)
        {
            if(root->left->right!=NULL)
                root->left=root->left->right;
            else
                root->left=NULL;
        }
        if(root->right!=NULL and root->right->val>high)
        {
            if(root->right->left!=NULL)
                root->right=root->right->left;
            else
                root->right=NULL;
        }
        return root;
        
        */