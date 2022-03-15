class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                st.push('(');
            }
            else if(s[i]==')')
            {
                if(st.empty())
                {
                    s.erase(s.begin()+i);
                    i--;
                }
                else
                {
                    st.pop();
                }
            }
        }
        while(!st.empty())
            st.pop();
        //cout<<s<<endl;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]==')')
            {
                st.push(')');
            }
            else if(s[i]=='(')
            {
                if(st.empty())
                {
                    s.erase(s.begin()+i);
                }
                else
                {
                    st.pop();
                }
            }
        }
        return s;
    }
};