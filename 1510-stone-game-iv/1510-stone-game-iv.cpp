class Solution {
public:
    bool winnerSquareGame(int n) {
        unordered_map<int,bool> mp;
        return helper(n,mp);
    }
    
    bool helper(int n,unordered_map<int,bool>& mp)
    {
        if(mp.count(n))
        {
            return mp[n];
        }
        int sq_root=floor(sqrt(n));
        for(int i=1;i<=sq_root;i++)
        {
            if(!helper(n-i*i,mp))
            {
                mp[n]=true;
                return true;
            }
        }
        mp[n]=false;
        return false;
    }
    
};