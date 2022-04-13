class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n, vector<int> (n,0));
        int dy[] = {1,0,-1,0};
        int dx[] = {0,1,0,-1};
        int x=0,y=0;
        int itx=0,ity=0;
        bool seen[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++) {
                seen[i][j]=false;
            }
        }
        for(int i=1;i<=n*n;i++)
        {
            arr[x][y]=i;
            int nx=x+dx[itx];
            int ny=y+dy[ity];
            seen[x][y]=true;
            if(nx>=0 and nx<n and ny>=0 and ny<n and !seen[nx][ny])
            {
                x=nx;
                y=ny;
            }
            else
            {
                itx=(itx+1)%4;
                ity=(ity+1)%4;
                x+=dx[itx];
                y+=dy[ity];
            }
        }
        return arr;
    }
};