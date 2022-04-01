class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=0,e=matrix.size()-1,n=matrix[0].size();
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(target>=matrix[mid][0] and target<=matrix[mid][n-1])
            {
                int l=0,r=n-1;
                while(l<=r)
                {
                    int mid2=l+(r-l)/2;
                    if(target==matrix[mid][mid2])
                        return true;
                    else if(target>matrix[mid][mid2])
                        l=mid2+1;
                    else
                        r=mid2-1;
                }
                return false;
            }
            else if(target>matrix[mid][n-1])
            {
                s=mid+1;
            }
            else
                e=mid-1;
        }
        return false;
    }
};