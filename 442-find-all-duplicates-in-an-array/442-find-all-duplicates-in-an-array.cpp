class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int pos=abs(nums[i]);
            if(nums[pos-1]<0)
            {
                ans.push_back(pos);
            }
            else
            {
                nums[pos-1]*=-1;
                //cout<<nums[pos]<<endl;
            }
        }
        return ans;
    }
};