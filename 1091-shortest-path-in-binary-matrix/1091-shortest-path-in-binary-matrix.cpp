class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1 or grid[n-1][n-1]==1)
            return -1;
        queue<pair<int,int>> q;
        q.push({0,0});
        grid[0][0]=1;
        while(!q.empty())
        {
            auto temp=q.front();
            int x=temp.first,y=temp.second;
            q.pop();
            if(x+1<n and y+1<n and grid[x+1][y+1]==0)
            {
                q.push({x+1,y+1});
                grid[x+1][y+1]=1+grid[x][y];
            }
            if(x+1<n and grid[x+1][y]==0)
            {
                q.push({x+1,y});
                grid[x+1][y]=1+grid[x][y];
            }
            if(y+1<n and grid[x][y+1]==0)
            {
                q.push({x,y+1});
                grid[x][y+1]=1+grid[x][y];
            }
            if(x-1>=0 and grid[x-1][y]==0)
            {
                q.push({x-1,y});
                grid[x-1][y]=1+grid[x][y];
            }
            if(x-1>=0 and y+1<n and grid[x-1][y+1]==0)
            {
                q.push({x-1,y+1});
                grid[x-1][y+1]=1+grid[x][y];
            }
            
            if(x+1<n and y-1>=0 and grid[x+1][y-1]==0)
            {
                q.push({x+1,y-1});
                grid[x+1][y-1]=1+grid[x][y];
            }
            if(y-1>=0 and grid[x][y-1]==0)
            {
                q.push({x,y-1});
                grid[x][y-1]=1+grid[x][y];
            }
            if(x-1>=0 and y-1>=0 and grid[x-1][y-1]==0)
            {
                q.push({x-1,y-1});
                grid[x-1][y-1]=1+grid[x][y];
            }
        }
        return grid[n-1][n-1]?grid[n-1][n-1]:-1;
    }
};


// 0 0 0
// 0 1 0
// 0 0 0