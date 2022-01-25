class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        for(int i=arr.size()-1;i>0;i--)
        {
            arr[i]=arr[i]-arr[i-1];
        }
        if(arr[1]<0)
            return false;
        int first_neg=-1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==0)
                return false;
            if(arr[i]<0 and first_neg==-1)
                first_neg=i;
            else if(arr[i]>0 and first_neg!=-1)
            {
                return false;
            }
        }
        if(first_neg==-1)
            return false;
        return true;
    }
};