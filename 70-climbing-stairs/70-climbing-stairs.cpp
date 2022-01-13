class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=2,c=3;
        if(n<3)
            return n;
        for(int i=2;i<n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};