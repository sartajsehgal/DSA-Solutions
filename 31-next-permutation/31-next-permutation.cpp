class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size()-1;
        while(n-1>=0 and nums[n]<=nums[n-1])
        {
            n--;
        }
        if(n==0)
        {
            sort(nums.begin(),nums.end());
            return;
        }
        int nextno=INT_MAX,ind,i;
        for(i=n;i<nums.size();i++)
        {
            // cout<<nums[n-1]<<" "<<nums[i]<<endl;
            if(nums[i]>nums[n-1] and nums[i]<=nextno)
            {
                nextno=nums[i];
                ind=i;
            }
        }
        swap(nums,ind,n-1);
        reverse(nums.begin()+n,nums.end());
    }
    
    void swap(vector<int>& nums,int i,int ind)
    {
        //cout<<nums[i]<<" "<<nums[ind]<<endl;
        int temp=nums[i];
        nums[i]=nums[ind];
        nums[ind]=temp;
    }
};