class Solution {
public:
    char findTheDifference(string s, string t) {
        int xo=0;
        for(char c:s)
        {
            xo^=c;
        }
        for(char c:t)
        {
            xo^=c;
        }
        return xo;
    }
};