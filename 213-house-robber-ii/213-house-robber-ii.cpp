class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[0],nums[1]);
        return max(robHouse(nums,0,n-2),robHouse(nums,1,n-1));
    }
    
    int robHouse(vector<int>& nums, int s, int e)
    {
        vector<int> dp(nums.size(),0);
        dp[e]=nums[e];
        dp[e-1]=max(nums[e-1],nums[e]);
        for(int i=e-2;i>=s;i--)
        {
            dp[i]=max(dp[i+1],nums[i]+dp[i+2]);
        }
        return dp[s];
    }
};