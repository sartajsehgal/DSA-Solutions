class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++)
        {
            ans.push_back(count_ones(i));
        }
        return ans;
    }
    
    int count_ones(int n)
    {
        int ones=0;
        while(n!=0)
        {
            ones+= (n & 1);
            n=n >> 1;
        }
        return ones;
    }
};