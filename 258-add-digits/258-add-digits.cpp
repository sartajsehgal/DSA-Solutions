class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        while(num>=10)
        {
            //cout<<num<<endl;
            sum=0;
            while(num>0)
            {
                sum+=num%10;
                num/=10;
            }
            num=sum;
        }
        return num;
    }
};