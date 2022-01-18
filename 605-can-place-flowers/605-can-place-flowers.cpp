class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size()==0 or n>flowerbed.size())
            return false;  
        if(flowerbed[0]==0)
        {
            if(flowerbed.size()>=2 and flowerbed[1]==0)
            {
                n--;
                flowerbed[0]=1;
            }
            else if(flowerbed.size()==1)
            {
                n--;
                return true;
            }
        }
        for(int i=1;i<flowerbed.size()-1;i++)
        {
            if(flowerbed[i]==0 and flowerbed[i-1]==0 and flowerbed[i+1]==0)
            {
                n--;
                flowerbed[i]=1;
            }
        }
        if(flowerbed[flowerbed.size()-1]==0 and flowerbed[flowerbed.size()-2]==0)
        {
            n--;
        }
        if(n<=0)
            return true;
        return false;
    }
};