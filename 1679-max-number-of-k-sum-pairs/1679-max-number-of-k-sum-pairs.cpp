class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans=0;
        for(int num:nums)
        {
            mp[num]++;
        }
        for(int num:nums)
        {
            if(num!=k-num and mp[num]>0 and mp[k-num]>0)
            {
                // cout<<num<<" "<<k-num<<endl;
                mp[num]--;
                mp[k-num]--;
                ans++;
            }
            else if(num==k-num and mp[num]>=2)
            {
                mp[num]-=2;
                ans++;
            }
        }
        return ans;
    }
};