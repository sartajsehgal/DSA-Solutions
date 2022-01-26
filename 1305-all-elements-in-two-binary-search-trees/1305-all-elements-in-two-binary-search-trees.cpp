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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        add_elements(root1,ans);
        add_elements(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
    
    void add_elements(TreeNode* root, vector<int>& ans)
    {
        if(root==NULL)
            return;
        add_elements(root->left,ans);
        ans.push_back(root->val);
        add_elements(root->right,ans);
    }
};