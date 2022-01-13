class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=INT_MAX,mx_diff=0;
        for(int i=0;i<prices.size();i++)
        {
            mn=min(mn,prices[i]);
            mx_diff=max(mx_diff,prices[i]-mn);
        }
        return mx_diff;
    }
};