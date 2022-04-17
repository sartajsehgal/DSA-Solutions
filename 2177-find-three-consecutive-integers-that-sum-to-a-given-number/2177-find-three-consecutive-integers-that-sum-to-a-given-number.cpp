class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        double n=(num/3.0)-1;
        if(floor(n)==n)
        {
            long long nn=floor(n);
            return {nn,nn+1,nn+2};
        }
        return {};
    }
};