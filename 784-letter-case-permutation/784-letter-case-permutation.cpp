class Solution {
public:
    vector<string> letterCasePermutation(string str) {
        vector<string> ans;
        ans.push_back(str);
        string s=str;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' and s[i]<='z')
            {
                int n=ans.size();
                for(int j=0;j<n;j++)
                {
                    string sn=ans[j];
                    sn[i]='A'+(sn[i]-'a');
                    ans.push_back(sn);
                }
            }
            else if(s[i]>='A' and s[i]<='Z')
            {
                int n=ans.size();
                for(int j=0;j<n;j++)
                {
                    string sn=ans[j];
                    sn[i]='a'+(sn[i]-'A');
                    ans.push_back(sn);
                }
            }
        
        }
        return ans;
    }
};