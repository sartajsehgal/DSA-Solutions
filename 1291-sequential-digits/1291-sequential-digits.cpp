class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        int num=low;
        int digits = (int)log10(low);
        num = (int)(num / pow(10, digits));
        helper(low,high,ans,num);
        return ans;
    }
    
    void helper(int low, int high, vector<int>& ans, int n)
    {
        //cout<<"n: "<<n<<endl;
        if(n>high)
            return;
        if(n>=low and n<=high)
        {
            ans.push_back(n);
        }
        string num=to_string(n);
        if(num.length()==1 or num[num.length()-1]=='9')
        {
            int n=num.length()+1;
            string str="";
            for(int i=1;i<=n;i++)
            {
                if(i<=9)
                    str+=to_string(i);
                else
                    return;
            }
            num.clear();
            num=str;
            //cout<<"1:   "<<num<<endl;
        }
        else
        {
            //cout<<num<<endl;
            for(int i=0;i<num.length();i++)
            {
                num[i]=num[i]+1;
            }
            //cout<<"2:   "<<num<<endl;
        }
        // cout<<num<<endl;
        helper(low,high,ans,stoi(num));
    }
};