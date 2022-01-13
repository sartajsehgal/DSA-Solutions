class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=prices.size()-1,mn=prices.size()-1,ans=0;
        for(int i=prices.size()-1;i>=0;i--)
        {
            if(prices[i]>prices[mx])
            {
                mx=i;
            }
            if(prices[i]<prices[mn])
            {
                mn=i;
            }
            if(mx>mn)
            {
                ans=max(ans,prices[mx]-prices[mn]);
            }
            if(mx>i)
            {
                ans=max(ans,prices[mx]-prices[i]);
            }
        }
        return ans;
    }
};