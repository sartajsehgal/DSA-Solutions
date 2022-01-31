class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string str="";
        for(int i=0;i<n;i++)
        {
            str+="(";
        }
        for(int i=0;i<n;i++)
        {
            str+=")";
        }
        unordered_set<string> ans;
        helper(str,ans,0);
        vector<string> ans_new;
        for(string s:ans)
        {
            stack<int> st;
            bool flag=false;
            for(char c:s)
            {
                if(c=='(')
                {
                    st.push(1);
                }
                else if(c==')' and !st.empty())
                {
                    st.pop();
                }
                else
                {
                    flag=true;
                    break;
                }
            }
            if(st.empty() and !flag)
            {
                ans_new.push_back(s);
            }
        }
        return ans_new;
    }
    
    void helper(string str, unordered_set<string>& ans, int n)
    {
        if(n>=str.length())
        {
            ans.insert(str);
            return;
        }
        for(int i=n;i<str.length();i++)
        {
            if(i==n or str[i]!=str[i-1])
            {
                swap(str[i],str[n]);
                helper(str,ans,n+1);
                swap(str[i],str[n]);
            }
        }
    }
};