class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int temp=0;
        int n=gas.size();
        for(int i=0;i<n;i++)
        {
            temp+=gas[i]-cost[i];
        }
        if(temp<0)
            return -1;
        int curr=0;
        for(int i=0;i<n;i++)
        {
            curr=0;
            for(int j=i;j<i+n;j++)
            {
                curr+=gas[j%n]-cost[j%n];
                if(curr<0)
                {
                    i=j%n;
                    break;
                }
            }
            if(curr>=0)
                return i;
        }
        return -1;
    }
};