class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return nstr(s)==nstr(t);
    }
    
    string nstr(string s)
    {
        stack<char> st;
        for(char c:s)
        {
            if(c!='#')
                st.push(c);
            else if(!st.empty())
                st.pop();
        }
        string ans="";
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};