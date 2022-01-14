class NumArray {
public:
    vector<int> cs;
    NumArray(vector<int>& nums) {
        int sum=0;
        cs.push_back(0);
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            cs.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        return cs[right+1]-cs[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */