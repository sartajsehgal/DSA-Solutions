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
        int count=0;
        while(n!=0)
        {
            if(n & 1)
                count++;
            n=n>>1;
        }
        return count;
    }
};