class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size(),c=matrix[0].size();
        vector<int> ans;
        vector<vector<bool>> seen(r,vector<bool> (c,false));
        int x[]={0,1,0,-1};
        int y[]={1,0,-1,0};
        int ci=0,i=0,j=0;
        while(ans.size()<r*c)
        {
            ans.push_back(matrix[i][j]);
            seen[i][j]=true;
            int ni=i+x[ci];
            int nj=j+y[ci];
            if(ni>=0 and ni<r and nj>=0 and nj<c and !seen[ni][nj])
            {
                i=ni;
                j=nj;
            }
            else
            {
                ci=(ci+1)%4;
                i=i+x[ci];
                j=j+y[ci];
            }
        }
        return ans;
    }
};