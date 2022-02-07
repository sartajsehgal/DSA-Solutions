class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        unordered_map<int,int> mp;
        int mn=INT_MAX,mx=INT_MIN;
        for(int num:nums)
        {
            if(num<0)
                num*=-1;
            mp[num]++;
            mn=min(mn,num);
            mx=max(mx,num);
        }
        vector<int> ans;
        for(int i=mn;i<=mx;i++)
        {
            if(mp.count(i))
            {
                for(int j=0;j<mp[i];j++)
                {
                    ans.push_back(i*i);
                }
            }
        }
        return ans;
    }
};