bool compare(vector<int>& v1,vector<int>& v2)
{
    return v1[1]-v1[0]>=v2[1]-v2[0];
}

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size(),total_cost=0,city1=0,city2=0;
        sort(costs.begin(),costs.end(),compare);
        for(auto cost : costs)
        {
            if(city1<n/2)
            {
                city1++;
                total_cost+=cost[0];
            }
            else
            {
                city2++;
                total_cost+=cost[1];
            }
        }
        return total_cost;
    }
};