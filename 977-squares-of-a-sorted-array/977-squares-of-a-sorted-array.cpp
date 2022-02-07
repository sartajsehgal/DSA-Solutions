class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0,r=nums.size()-1,x=r;
        vector<int> ans(nums.size(),0);
        while(l<=r)
        {
            if(abs(nums[r])>abs(nums[l]))
            {
                ans[x]=nums[r]*nums[r];
                r--;
            }
            else
            {
                ans[x]=nums[l]*nums[l];
                l++;
            }
            x--;
        }
        return ans;
    }
};