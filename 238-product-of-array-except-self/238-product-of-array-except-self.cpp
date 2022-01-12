class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prods(nums.size(),1);
        for(int i=1;i<nums.size();i++)
        {
            prods[i]=nums[i-1]*prods[i-1];
        }
        int back=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
        {
            prods[i]*=back;
            back*=nums[i];
        }
        return prods;
    }
};