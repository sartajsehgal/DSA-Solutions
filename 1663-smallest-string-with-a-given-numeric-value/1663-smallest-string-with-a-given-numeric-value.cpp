class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans="";
        while(n>0 and k>0)
        {
            n--;
            for(int i=25;i>=0;i--)
            {
                if(k-(i+1)>=n)
                {
                    ans+=('a'+i);
                    k-=(i+1);
                    break;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};