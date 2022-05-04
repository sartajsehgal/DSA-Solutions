class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1,count_ops=0;
        while(l<r)
        {
            if(nums[l]+nums[r]==k)
            {
                count_ops++;
                l++;
                r--;
            }
            else if(nums[l]+nums[r]<k)
                l++;
            else
                r--;
        }
        return count_ops;
    }
};