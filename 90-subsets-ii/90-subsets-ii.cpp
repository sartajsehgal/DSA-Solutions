class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> sub;
        sort(nums.begin(),nums.end());
        helper(nums,ans,sub,0);
        return ans;
    }
    
    void helper(vector<int>& nums, vector<vector<int>>& ans, vector<int>& sub,int n)
    {
        ans.push_back(sub);
        for(int i=n;i<nums.size();i++)
        {
            if(i==n || nums[i]!=nums[i-1])
            {
                sub.push_back(nums[i]);
                helper(nums,ans,sub,i+1);
                sub.pop_back();
            }
        }
    }
};