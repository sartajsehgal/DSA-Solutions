class Solution {
public:
    int ans,count=0;
    string curr="";
    int countVowelStrings(int n) {
        helper(0,n);
        return ans;
    }
    
    void helper(int idx, int n)
    {
        if(count==n)
            ans++;
        for(int i=idx;i<5 and count<n;i++)
        {
            count++;
            helper(i,n);
            count--;
        }
    }
};