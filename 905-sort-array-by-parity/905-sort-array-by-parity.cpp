class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                ans.insert(ans.begin(),nums[i]);
            }
            else
                ans.push_back(nums[i]);
        }
        return ans;
    }
};