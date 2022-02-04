bool compare(pair<char,int> p1, pair<char,int> p2)
{
    return p1.second>p2.second;
}

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char i:s)
        {
            freq[i]++;
        }
        vector<pair<char,int>> v;
        for(auto val:freq)
        {
            v.push_back(val);
        }
        sort(v.begin(),v.end(),compare);
        string ans="";
        for(auto val:v)
        {
            for(int i=0;i<val.second;i++)
            {
                ans+=val.first;
            }
        }
        return ans;
    }
};