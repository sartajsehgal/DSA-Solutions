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
            if(isValid(s))
                ans_new.push_back(s);
        }
        return ans_new;
    }
    
    bool isValid(string str)
    {
        int sum=0;
        for(char c:str)
        {
            if(c=='(')
                sum++;
            else
                sum--;
            if(sum<0)
                return false;
        }
        if(sum==0)
            return true;
        return false;
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