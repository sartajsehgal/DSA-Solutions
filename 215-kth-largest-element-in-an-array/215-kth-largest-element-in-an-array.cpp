class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>, greater<int>> pq;
        int i;
        for(i=0;i<k;i++)
        {
            //cout<<nums[i]<<endl;
            pq.push(nums[i]);
        }
        for(;i<nums.size();i++)
        {
            if(nums[i]>pq.top())
            {
                //cout<<nums[i]<<endl;
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }
};