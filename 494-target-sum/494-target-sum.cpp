class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0,zero=0,subsum;
        for(int num:nums)
        {
            sum+=num;
            if(num==0)
                zero++;
        }
        float sub=0.5*(sum-target);
        if(sub==floor(sub) and target<=sum)
            subsum=sub;
        else
            return 0;
        int n=nums.size();
        int dp[n+1][subsum+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<subsum+1;j++)
            {
                if(i==0)
                {
                    dp[i][j]=0;
                }
                if(j==0)
                {
                    dp[i][j]=1;
                }
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<subsum+1;j++)
            {
                if(nums[i-1]>j or nums[i-1]==0)
                {
                    dp[i][j]=dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j] + dp[i-1][j-nums[i-1]];
                }
            }
        }
        return pow(2,zero)*dp[n][subsum];
    }
};