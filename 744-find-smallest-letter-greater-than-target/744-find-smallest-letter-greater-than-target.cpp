class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans='z'+1;
        for(char letter:letters)
        {
            if(letter>target)
                ans=min(ans,letter);
        }
        if(ans=='z'+1)
            return letters[0];
        return ans;
    }
};