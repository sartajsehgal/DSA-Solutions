class compare {
  public:
    bool operator()(const pair<int,int>& p1, const pair<int,int>& p2)
    {
        return p1.second>p2.second;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int num:nums)
        {
            freq[num]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, compare> pq;
        for(auto val:freq)
        {
            pq.push(val);
            if(pq.size()>k)
                pq.pop();
        }
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            int a=pq.top().first;
            ans.push_back(a);
            pq.pop();
        }
        return ans;
    }
};