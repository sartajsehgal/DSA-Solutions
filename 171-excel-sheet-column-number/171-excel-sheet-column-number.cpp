class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.length(),col_no=0;
        for(int i=0;i<n;i++)
        {
            col_no+=pow(26,n-i-1)*(columnTitle[i]-'A'+1);
        }
        return col_no;
    }
};