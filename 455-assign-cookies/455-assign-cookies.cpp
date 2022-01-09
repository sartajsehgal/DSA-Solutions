class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end(),greater<int>());
        sort(g.begin(),g.end(),greater<int>());
        // for(int i=0;i<s.size();i++)
        // {
        //     cout<<s[i]<<" ";
        // }
        // cout<<g.size()<<" "<<s.size()<<endl;
        int i=0,j=0,ans=0;
        while(i<g.size() and j<s.size())
        {
            if(s[j]>=g[i])
            {
                ans++;
                i++;
                j++;
            }
            else
                i++;
        }
        return ans;
    }
};