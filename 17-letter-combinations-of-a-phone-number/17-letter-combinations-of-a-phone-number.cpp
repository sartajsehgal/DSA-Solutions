class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits=="")
            return {};
        vector<string> ans({""});
        vector<string> phone({"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"});
        for(auto digit:digits)
        {
            vector<string> v(ans);
            for(char c:phone[digit-'2'])
            {
                for(auto val:v)
                {
                    val+=c;
                    ans.push_back(val);
                }
            }
        }
        vector<string> fin;
        for(string s:ans)
        {
            if(s.length()==digits.length())
                fin.push_back(s);
        }
        return fin;
    }
};