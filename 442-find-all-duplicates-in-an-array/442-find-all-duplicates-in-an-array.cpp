class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        nums.push_back(1);
        for(int i=0;i<nums.size()-1;i++)
        {
            int pos=abs(nums[i]);
            if(nums[pos]<0)
            {
                ans.push_back(pos);
            }
            else
            {
                nums[pos]*=-1;
                //cout<<nums[pos]<<endl;
            }
        }
        return ans;
    }
};