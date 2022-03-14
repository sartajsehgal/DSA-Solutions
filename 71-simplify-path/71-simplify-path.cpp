class Solution {
public:
    string simplifyPath(string path) {
        vector<string> v;
        stack<string> s;
        string curr="";
        for(int i=1;i<path.length();i++)
        {
            if(path[i]=='/')
            {
                if(curr!="")
                {
                    v.push_back(curr);
                    curr="";
                }
            }
            else
            {
                curr+=path[i];
            }
        }
        if(curr!="")
            v.push_back(curr);
        //"/home/../w//.../s/../ada/./../da//"
        for(string i:v)
        {
            //cout<<i<<", ";
            if(i==".." and !s.empty())
            {
                s.pop();
            }
            else if(i!=".")
            {
                s.push(i);
            }
        }
        string ans="";
        while(!s.empty())
        {
            if(s.top()!=".." and s.top()!=".")
            {
                ans='/'+s.top()+ans;
            }
            s.pop();
        }
        if(ans=="")
            return "/";
        return ans;
    }
};