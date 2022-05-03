class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> arr(nums);
        sort(arr.begin(),arr.end());
        int start=INT_MAX,end=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=arr[i])
            {
                start=min(start,i);
                end=max(end,i);
            }
        }
        return (end-start>=0?end-start+1:0);
    }
};