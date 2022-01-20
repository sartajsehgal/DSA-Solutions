class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        //long long int sum=0;
        int l=1,r=*max_element(piles.begin(),piles.end());
        int ans=INT_MAX;
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
                //ans=min(ans,mid);
            }
        }
        return r;
    }
};

// class Solution {
// public:
//     int minEatingSpeed(vector<int>& piles, int h) {      
//         int left = 1, right = *max_element(piles.begin(), piles.end());

//         while (left < right) {
//             int middle = (left + right) / 2;
//             int hourSpent = 0;
//             for (int pile : piles) {
//                 hourSpent += pile / middle + (pile % middle != 0);
//             }
//             if (hourSpent <= h) {
//                 right = middle;
//             } else {
//                 left = middle + 1;
//             }
//         }
//         return right;
//     }
// };
