class Solution {
private:
    set<vector<int>> s;
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        helper(nums,0);
        for(auto i:s)
        {
            ans.push_back(i);
        }
        return ans;
    }
    
    void helper(vector<int>& nums,int n)
    {
        if(n>=nums.size())
        {
            if(s.find(nums)==s.end())
            {
                s.insert(nums);
            }
        }
        for(int i=n;i<nums.size();i++)
        {
            swap(nums[i],nums[n]);
            helper(nums,n+1);
            swap(nums[i],nums[n]);
        }
    }
};