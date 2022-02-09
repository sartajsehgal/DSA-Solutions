class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0 or nums[i]!=nums[i-1])
            {
                if(binary_search(nums.begin()+i+1,nums.end(),nums[i]+k))
                {
                    count++;
                }
            }
        }
        return count;
    }
};