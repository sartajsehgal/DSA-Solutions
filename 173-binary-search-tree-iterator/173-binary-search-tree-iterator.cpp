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
class BSTIterator {
    stack<int> s;
public:
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        inorder(root->right);
        s.push(root->val);
        inorder(root->left);
    }
    
    int next() {
        int top = s.top();
        s.pop();
        return top;
    }
    
    bool hasNext() {
        if(!s.empty())
            return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */