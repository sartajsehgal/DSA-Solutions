bool compare(pair<int,int>& p1,pair<int,int> p2)
{
    return p1.second>p2.second;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int num:nums)
        {
            freq[num]++;
        }
        vector<pair<int,int>> v;
        for(auto f:freq)
        {
            v.push_back(f);
        }
        sort(v.begin(),v.end(),compare);
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].first);
        }
        return ans;
    }
};