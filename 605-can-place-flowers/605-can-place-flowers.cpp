class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size()==0 or n>flowerbed.size())
            return false;  
        for(int i=0;i<flowerbed.size();i++)
        {
            if(flowerbed[i]==0 and (i==0 or flowerbed[i-1]==0) and (i==flowerbed.size()-1 or flowerbed[i+1]==0))
            {
                n--;
                flowerbed[i]=1;
            }
            if(n<=0)
                return true;
        }
        return false;
    }
};