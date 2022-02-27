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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        vector<double> ans;
        q.push(root);
        q.push(NULL);
        double avg=0;
        int i=0;
        while(!q.empty())
        {
            TreeNode* ptr=q.front();
            q.pop();
            if(ptr==NULL)
            {
                if(!q.empty())
                {
                    q.push(NULL);
                }
                ans.push_back(avg/i);
                avg=0;
                i=0;
            }
            else
            {
                avg+=ptr->val;
                i++;
                if(ptr->left)
                {
                    q.push(ptr->left);
                }
                if(ptr->right)
                {
                    q.push(ptr->right);
                }
            }
        }
        return ans;
    }
};