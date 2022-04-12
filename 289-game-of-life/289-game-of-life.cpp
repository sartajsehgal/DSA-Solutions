class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size(),n=board[0].size();
        vector<vector<int>> new_board(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int arr[2]={0};
                if(i-1>=0)
                    arr[board[i-1][j]]++;
                if(i+1<m)
                    arr[board[i+1][j]]++;
                if(j-1>=0)
                    arr[board[i][j-1]]++;
                if(j+1<n)
                    arr[board[i][j+1]]++;
                if(i-1>=0 and j-1>=0)
                    arr[board[i-1][j-1]]++;
                if(i-1>=0 and j+1<n)
                    arr[board[i-1][j+1]]++;
                if(i+1<m and j-1>=0)
                    arr[board[i+1][j-1]]++;
                if(i+1<m and j+1<n)
                    arr[board[i+1][j+1]]++;
                if(board[i][j]==0 and arr[1]==3)
                    new_board[i][j]=1;
                else if(board[i][j]==1 and (arr[1]==2 or arr[1]==3))
                    new_board[i][j]=1;
            }
        }
        board=new_board;
    }
};