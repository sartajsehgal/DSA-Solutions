class Solution {
private:
    set<vector<int>> st;
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> curr;
        vector<vector<int>> ans;
        helper(candidates,target,curr,0);
        for(auto i:st)
        {
            ans.push_back(i);
        }
        return ans;
    }
    
    void helper(vector<int>& candidates, int target, vector<int>& curr, int n)
    {
        if(target==0)
        {
            st.insert(curr);
            return;
        }
        if(target<0)
            return;
        for(int i=n;i<candidates.size() and target>=candidates[i];i++)
        {
            curr.push_back(candidates[i]);
            helper(candidates,target-candidates[i],curr,i);
            curr.pop_back();
        }
    }
};