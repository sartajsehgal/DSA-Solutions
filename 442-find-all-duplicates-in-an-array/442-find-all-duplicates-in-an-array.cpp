class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> s;
        for(int num:nums)
        {
            if(s.find(num)!=s.end())
            {
                ans.push_back(num);
            }
            else
            {
                s.insert(num);
            }
        }
        return ans;
    }
};