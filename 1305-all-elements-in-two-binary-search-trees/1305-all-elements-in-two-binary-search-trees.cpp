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
        vector<int> tree1;
        vector<int> tree2;
        getVals(root1,tree1);
        getVals(root2,tree2);
        vector<int> ans;
        int i=0,j=0;
        while(i<tree1.size() and j<tree2.size())
        {
            if(tree1[i]<tree2[j])
            {
                ans.push_back(tree1[i]);
                i++;
            }
            else
            {
                ans.push_back(tree2[j]);
                j++;
            }
        }
        while(i<tree1.size())
        {
            ans.push_back(tree1[i]);
            i++;
        }
        while(j<tree2.size())
        {
            ans.push_back(tree2[j]);
            j++;
        }
        return ans;
    }
    
    void getVals(TreeNode *root, vector<int>& arr)
    {
        if(root==NULL)
            return;
        getVals(root->left,arr);
        arr.push_back(root->val);
        getVals(root->right,arr);
    }
};