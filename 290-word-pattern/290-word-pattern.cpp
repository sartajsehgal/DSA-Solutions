class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        char* str=&s[0];
        char *token=strtok(str," ");
        while(token!=NULL)
        {
            v.push_back(token);
            token=strtok(NULL," ");
        }
        unordered_map<char,string> mp;
        if(pattern.length()!=v.size())
        {
            return false;
        }
        for(int i=0;i<pattern.length();i++)
        {
            if(mp.count(pattern[i]))
            {
                if(mp[pattern[i]]!=v[i])
                    return false;
            }
            else
            {
                mp[pattern[i]]=v[i];
            }
        }
        unordered_set<string> st;
        for(auto x:mp)
        {
            if(st.find(x.second)!=st.end())
                return false;
            st.insert(x.second);
        }
        return true;
    }
};