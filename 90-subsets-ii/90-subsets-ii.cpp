class Solution {
private:
    set<vector<int>> s;
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
        if(s.find(sub)==s.end())
        {
            s.insert(sub);
            ans.push_back(sub);
        }
        for(int i=n;i<nums.size();i++)
        {
            sub.push_back(nums[i]);
            helper(nums,ans,sub,i+1);
            sub.pop_back();
        }
    }
};