class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=0;
        long long int sum=0;
        for(int pile:piles)
        {
            sum+=pile;
            r=max(r,pile);
        }
        l=sum/h+(sum%h!=0);
        int ans=r;
        while(l<r)
        {
            int mid=l+(r-l)/2;
            int s=0;
            for(int pile:piles)
            {
                s+=pile/mid+(pile%mid!=0);
            }
            if(s>h)
            {
                l=mid+1;
            }
            else
            {
                r=mid;
                ans=min(ans,r);
            }
        }
        return ans;
    }
};