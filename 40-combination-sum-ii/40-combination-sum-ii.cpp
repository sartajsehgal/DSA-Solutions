class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
        sort(candidates.begin(),candidates.end());
        helper(candidates,target,ans,comb,0);
        return ans;
    }
    
    void helper(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& comb, int n)
    {
        for(int a:comb)
        {
            cout<<a<<" ";
        }
        cout<<endl;
        if(target<0)
            return;
        if(target==0)
        {
            ans.push_back(comb);
            return;
        }
        for(int i=n;i<candidates.size() and target>=candidates[i];i++)
        {
            if(i==n or candidates[i]!=candidates[i-1])
            {
                comb.push_back(candidates[i]);
                helper(candidates,target-candidates[i],ans,comb,i+1);
                comb.pop_back();
            }
        }
    }
};