class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area=0,curr=0,l=0,r=height.size()-1;
        while(l<r)
        {
            if(height[l]<height[r])
            {
                curr=height[l]*(r-l);
                l++;
            }
            else
            {
                curr=height[r]*(r-l);
                r--;
            }
            max_area=max(curr,max_area);
        }
        return max_area;
    }
};