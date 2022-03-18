class Solution {
public:
    string removeDuplicateLetters(string s) {
        bool visited[26]={false};
        int lastIndex[26]={0};
        for(int i=0;i<s.length();i++)
        {
            lastIndex[s[i]-'a']=i;
        }
        stack<char> st;
        st.push(s[0]);
        visited[s[0]-'a']=true;
        for(int i=1;i<s.length();i++)
        {
           int curr = s[i] - 'a';
            if (visited[curr]) continue; // if seen continue as we need to pick one char only
            while(st.size() > 0 && st.top() > s[i] && i < lastIndex[st.top() - 'a']){
                visited[st.top() - 'a'] = false; // pop out and mark unseen
                st.pop();
            }
            st.push(s[i]); // add into stack
            visited[curr] = true; // mark seen
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};