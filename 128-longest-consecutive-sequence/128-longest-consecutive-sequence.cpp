class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int num:nums)
        {
            s.insert(num);
        }
        int curr=0,curr_streak=0,max_streak=0;
        for(int val:s)
        {
            if(s.find(val-1)==s.end())
            {
                curr_streak=1;
                curr=val;
                while(s.find(curr+1)!=s.end())
                {
                    curr++;
                    curr_streak++;
                }
                max_streak=max(max_streak,curr_streak);
            }
        }
        return max_streak;
    }
};