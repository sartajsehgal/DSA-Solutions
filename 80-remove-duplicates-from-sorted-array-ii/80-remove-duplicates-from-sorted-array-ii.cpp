class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr_count=1,k=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                curr_count++;
                if(curr_count<=2)
                {
                    nums[k]=nums[i];
                    k++;
                }
            }
            else
            {
                nums[k]=nums[i];
                k++;
                curr_count=1;
            }
        }
        return k;
    }
};