class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> comb;
        helper(k,n,ans,comb,1);
        return ans;
    }
    
    void helper(int k, int n, vector<vector<int>>& ans, vector<int>& comb, int itr)
    {
        if(n<0 or comb.size()>k)
            return;
        if(n==0 and comb.size()==k)
        {
            ans.push_back(comb);
            return;
        }
        for(int i=itr;i<=9;i++)
        {
            comb.push_back(i);
            helper(k,n-i,ans,comb,i+1);
            comb.pop_back();
        }
    }
};