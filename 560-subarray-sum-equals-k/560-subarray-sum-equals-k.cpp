class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int cs=0,cnt=0;
        mp[0]=1;
        for(int num:nums)
        {
            cs+=num;
            if(mp.count(cs-k))
            {
                cnt+=mp[cs-k];
            }
            mp[cs]++;
        }
        return cnt;
    }
};