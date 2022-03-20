class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n=tops.size();
        int count_tops[7]={0},count_bottoms[7]={0},count_same[7]={0};
        for(int i=0;i<n;i++)
        {
            count_tops[tops[i]]++;
            count_bottoms[bottoms[i]]++;
            if(tops[i]==bottoms[i])
                count_same[tops[i]]++;
        }
        for(int i=1;i<=6;i++)
        {
            if(count_tops[i]+count_bottoms[i]-count_same[i]==n)
            {
                return n-max(count_tops[i],count_bottoms[i]);
            }
        }
        return -1;
    }
};