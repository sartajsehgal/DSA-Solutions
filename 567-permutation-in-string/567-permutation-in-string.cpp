class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
        vector<int> freq(26,0);
        vector<int> freq1(26,0);
        for(int i=0;i<s1.length();i++)
        {
            freq[s1[i]-'a']++;
            freq1[s2[i]-'a']++;
        }
        for(int i=0;i<s2.length()-s1.length();i++)
        {
            if(freq==freq1)
                return true;
            freq1[s2[i]-'a']--;
            freq1[s2[i+s1.length()]-'a']++;
        }
        return (freq1==freq);
    }
};