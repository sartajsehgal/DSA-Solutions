class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(int num:nums)
        {
            mp[num]++;
        }
        int k=0;
        for(auto x:mp)
        {
            if(x.second<=2)
            {
                for(int i=k;i<k+x.second;i++)
                {
                    nums[i]=x.first;
                }
                k+=x.second;
            }
            else
            {
                nums[k]=x.first;
                nums[k+1]=x.first;
                k+=2;
            }
        }
        return k;
    }
};