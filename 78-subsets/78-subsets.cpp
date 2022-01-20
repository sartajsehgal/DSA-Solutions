class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> powerset;
        vector<int> subset;
        helper(nums,powerset,subset,0);
        return powerset;
    }
    
    void helper(vector<int>& nums,vector<vector<int>>& powerset,vector<int>& subset,int n)
    {
        powerset.push_back(subset);
        for(int i=n;i<nums.size();i++)
        {
            subset.push_back(nums[i]);
            helper(nums,powerset,subset,i+1);
            subset.pop_back();
        }
    }
};