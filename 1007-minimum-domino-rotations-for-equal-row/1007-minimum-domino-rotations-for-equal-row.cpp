class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int count=0;
        unordered_map<int,int> top_f,bottom_f;
        for(int i=0;i<tops.size();i++)
        {
            top_f[tops[i]]++;
            bottom_f[bottoms[i]]++;
        }
        int max_top,max_bottom,max_val_top=0,max_val_bottom=0;
        for(auto x:top_f)
        {
            if(x.second>max_val_top)
            {
                max_val_top=x.second;
                max_top=x.first;
            }
        }
        for(auto x:bottom_f)
        {
            if(x.second>max_val_bottom)
            {
                max_val_bottom=x.second;
                max_bottom=x.first;
            }
        }
        // if(max_top>=max_bottom and bottom_f[max_top]>=bottoms.size()-max_val_top)
        //     return bottoms.size()-max_val_top;
        // if(max_bottom>max_top and top_f[max_bottom]>=tops.size()-max_val_bottom)
        //     return tops.size()-max_val_bottom;
        // return -1;
        if(max_val_top>=max_val_bottom)
        {
            for(int i=0;i<tops.size();i++)
            {
                if(tops[i]!=max_top and bottoms[i]==max_top)
                {
                    count++;
                }
                else if(tops[i]!=max_top and bottoms[i]!=max_top)
                    return -1;
            }
            return count;
        }
        else
        {
            for(int i=0;i<bottoms.size();i++)
            {
                if(bottoms[i]!=max_bottom and tops[i]==max_bottom)
                {
                    count++;
                }
                else if(bottoms[i]!=max_bottom and tops[i]!=max_bottom)
                    return -1;
            }
            return count;
        }
        return -1;
    }
};