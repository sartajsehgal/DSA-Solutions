class Solution {
public:
    vector<vector<int>> ans;
    set<vector<int>> s;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        helper(nums,0);
        for(auto x:s)
        {
            ans.push_back(x);
        }
        return ans;
    }
    
    void helper(vector<int>& nums, int idx)
    {
        if(idx>=nums.size() and s.find(nums)==s.end())
        {
            s.insert(nums);
        }
        for(int i=idx;i<nums.size();i++)
        {
            swap(nums[i],nums[idx]);
            helper(nums,idx+1);
            swap(nums[i],nums[idx]);
        }
    }
};