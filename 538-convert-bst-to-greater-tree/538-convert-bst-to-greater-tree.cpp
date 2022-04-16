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


// 0 1 2 3 4 5 6 7 8
//  21 15 8

class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL)
            return root;
        vector<int> vals;
        inorder(root,vals);
        int n=vals.size();
        unordered_map<int,int> mp;
        mp[vals[n-1]]=vals[n-1];
        for(int i=n-2;i>=0;i--)
        {
            mp[vals[i]]=vals[i]+mp[vals[i+1]];
        }
        
        convert(root,mp);
        return root;
    }
    
    void inorder(TreeNode* root, vector<int>& vals)
    {
        if(root==NULL)
            return;
        inorder(root->left,vals);
        vals.push_back(root->val);
        inorder(root->right,vals);
    }
    
    void convert(TreeNode* root,unordered_map<int,int>& mp )
    {
        if(root==NULL)
            return;
        convert(root->left,mp);
        root->val=mp[root->val];
        convert(root->right,mp);
    }
};