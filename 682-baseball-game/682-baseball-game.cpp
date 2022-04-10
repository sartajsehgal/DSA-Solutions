class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> nums(1000,0);
        int i=-1;
        for(auto c:ops)
        {
            if(c=="+")
            {
                i++;
                nums[i]=nums[i-1]+nums[i-2];
            }
            else if(c=="D")
            {
                i++;
                nums[i]=2*nums[i-1];
            }
            else if(c=="C")
            {
                nums[i]=0;
                i--;
            }
            else
            {
                i++;
                nums[i]=stoi(c);
            }
        }
        int sum=0;
        for(int j=0;j<=i;j++)
        {
            sum+=nums[j];
        }
        return sum;
    }
};