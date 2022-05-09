class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits=="")
            return {};
        vector<string> phone{"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"},ans{""};
        for(auto digit:digits)
        {
            vector<string> temp;
            string s=phone[digit-'2'];
            for(int j=0;j<s.length();j++)
            {
                for(int k=0;k<ans.size();k++)
                {
                    temp.push_back(ans[k]+s[j]);
                }
            }
            swap(ans,temp);
        }
        return ans;
    }
};