class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> v;
        int r=mat.size(),c=mat[0].size();
        for(int i=0;i<r;i++)
        {
            int ones=0;
            for(int j=0;j<c;j++)
            {
                if(mat[i][j]==1)
                    ones++;
            }
            v.push_back({ones,i});
        }
        sort(v.begin(),v.end());
        vector<int> ans(k,0);
        for(int i=0;i<k;i++)
        {
            ans[i]=v[i].second;
        }
        return ans;
    }
};