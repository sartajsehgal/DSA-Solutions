class Solution {
private:
    vector<int> curr;
    vector<vector<int>> ans;
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums;
        for(int i=1;i<=9;i++)
        {
            nums.push_back(i);
        }
        solve(nums,k,n,0);
        return ans;
    }
    
    void solve(vector<int>& nums, int k, int n, int idx)
    {
        if(n==0 and curr.size()==k)
        {
            ans.push_back(curr);
        }
        for(int i=idx;n>=nums[i] and i<nums.size();i++)
        {
            curr.push_back(nums[i]);
            solve(nums,k,n-nums[i],i+1);
            curr.pop_back();
        }
    }
};