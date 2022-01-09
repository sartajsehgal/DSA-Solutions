class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end(),greater<int>());
        sort(g.begin(),g.end(),greater<int>());
        int i=0,j=0,ans=0;
        while(i<g.size() and j<s.size())
        {
            if(s[j]>=g[i])
            {
                ans++;
                j++;
            }
            i++;
        }
        return ans;
    }
};