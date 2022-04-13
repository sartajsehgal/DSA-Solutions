class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> pq;
public:
    KthLargest(int k, vector<int>& nums) {
        for(int i=0;i<k;i++)
        {
            if(i<nums.size())
            {
                pq.push(nums[i]);
            }
            else
            {
                pq.push(INT_MIN);
            }
        }
        for(int i=k;i<nums.size();i++)
        {
            if(nums[i]>pq.top())
            {
                pq.pop();
                pq.push(nums[i]);
            }
        }
    }
    
    int add(int val) {
        if(!pq.empty())
        {
            if(val>pq.top())
            {
                pq.pop();
                pq.push(val);
            }
        }
        else
        {
            pq.push(val);
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */