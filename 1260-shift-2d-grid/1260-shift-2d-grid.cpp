class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r=grid.size();
        int c=grid[0].size();
        k=k%(r*c);
        for(int l=0;l<k;l++)
        {
            int prev_last=grid[r-1][c-1];
            for(int i=0;i<r;i++)
            {
                int last=grid[i][c-1];
                for(int j=c-1;j>0;j--)
                {
                    grid[i][j]=grid[i][j-1];
                }
                grid[i][0]=prev_last;
                prev_last=last;
            }
        }
        return grid;
    }
};