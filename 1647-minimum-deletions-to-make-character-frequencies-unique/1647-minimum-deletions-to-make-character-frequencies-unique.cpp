class Solution {
public:
    int minDeletions(string s) {
        sort(s.begin(),s.end());
        unordered_set<int> st;
        int ans=0,curr=1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            {
                curr++;
            }
            else
            {
                while(st.find(curr)!=st.end() and curr>=1)
                {
                    curr--;
                    ans++;
                }
                //cout<<curr<<endl;
                st.insert(curr);
                curr=1;
            }
        }
        while(st.find(curr)!=st.end() and curr>=1)
        {
            curr--;
            ans++;
        }
        //cout<<curr<<endl;
        return ans;
    }
};