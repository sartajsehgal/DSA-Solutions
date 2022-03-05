class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num:nums)
        {
            freq[num]++;
        }
        vector<pair<int,int>> arr;
        for(auto f:freq)
        {
            arr.push_back(f);
        }
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<int> dp(n,-1);
        return helper(arr,n-1,dp);
    }
    
    int helper(vector<pair<int,int>>& arr,int n,vector<int>&dp)
    {
        if(n<0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        if(n==0 or arr[n-1].first==arr[n].first-1)
        {
            return dp[n]=max(arr[n].first*arr[n].second+helper(arr,n-2,dp),helper(arr,n-1,dp));
        }
        return dp[n]=arr[n].first*arr[n].second+helper(arr,n-1,dp);
    }
};