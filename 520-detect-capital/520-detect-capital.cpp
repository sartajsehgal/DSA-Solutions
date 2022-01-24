class Solution {
public:
    bool detectCapitalUse(string word) {
        bool all_capitals=true,all_small=true,only_first=true;
        for(int i=0;i<word.length();i++)
        {
            if((i==0 and (word[i]>='a' and word[i]<='z')) or (i!=0 and (word[i]>='A' and word[i]<='Z')))
            {
                only_first=false;
            }
            if(word[i]>='a' and word[i]<='z')
            {
                all_capitals=false;
            }   
            else if(word[i]>='A' and word[i]<='Z')
            {
                all_small=false;
            }
        }
        if(all_small or all_capitals or only_first)
            return true;
        return false;
    }
};