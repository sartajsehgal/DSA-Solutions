bool compare(vector<int> v1,vector<int> v2)
{
    if(v1[0]!=v2[0])
        return v1[0]<v2[0];
    return v1[1]>v2[1];
}

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int total=intervals.size();
        sort(intervals.begin(),intervals.end(),compare);
        // for(int i=0;i<intervals.size();i++)
        // {
        //     cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
        // }
        for(int i=1;i<intervals.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(intervals[i][0]>=intervals[j][0] and intervals[i][1]<=intervals[j][1])
                {
                    total--;
                    break;
                }
            }
        }
        return total;
    }
};