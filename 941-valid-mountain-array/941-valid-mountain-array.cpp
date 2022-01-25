class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        bool inc=true,dec=false;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1])
                return false;
            if(i==1 and arr[i-1]>arr[i])
                return false;
            if(inc and arr[i-1]>arr[i])
            {
                inc=false;
                dec=true;
            }
            else if(dec and arr[i]>arr[i-1])
            {
                return false;
            }
        }
        if(!dec)
            return false;
        return true;
    }
};