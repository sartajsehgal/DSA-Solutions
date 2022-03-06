class Solution {
public:
    int m = 1000000007;
    int countOrders(int n) {
        long long int factorial = 1;
        for(int i=1;i<=2*n;i++)
        {
            factorial*=i;
            if(i%2==0)
                factorial/=2;
            factorial%=m;
        }
        return factorial;
    }
};