class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
        //sort(candidates.begin(),candidates.end(),greater<int>());
        helper(candidates,target,ans,comb,0);
        return ans;
    }
    
    void helper(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& comb,int n)
    {
        if(target==0)
        {
            ans.push_back(comb);
            return;
        }
        if(target<0)
        {
            return;
        }
        for(int i=n;i<candidates.size();i++)
        {
            comb.push_back(candidates[i]);
            helper(candidates,target-candidates[i],ans,comb,i);
            comb.pop_back();
        }
    }
};