class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> last_occ;
        for(int i=0;i<s.length();i++)
        {
            last_occ[s[i]]=i;
        }
        vector<int> ans;
        int st=0,e=last_occ[s[0]];
        for(int i=0;i<s.length();i++)
        {
            e=max(e,last_occ[s[i]]);
            if(i==e)
            {
                ans.push_back(e-st+1);
                st=i+1;
            }
        }
        return ans;
    }
};