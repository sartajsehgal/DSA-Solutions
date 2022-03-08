class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
            return 0;
        int count=0;
        for(int i=0;i<=n-3;i++)
        {
            for(int j=i+2;j<n;j++)
            {
                int diff=nums[i+1]-nums[i];
                bool flag=true;
                for(int k=i;k<j;k++)
                {
                    //cout<<nums[k]<<" ";
                    if(nums[k+1]-nums[k]!=diff)
                    {
                        flag=false;
                        break;
                    }
                }
                //cout<<endl;
                if(flag)
                    count++;
            }
        }
        return count;
    }
};