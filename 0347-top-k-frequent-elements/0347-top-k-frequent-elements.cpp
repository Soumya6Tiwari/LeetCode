class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
       map<int,int>m;
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq_min_heap;
        int i,j;
        vector<int>res;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        i=0;
        for(auto i:m)
        {
            pair<int,int>p={i.second,i.first};
            pq_min_heap.push(p);
            if(pq_min_heap.size()>k)
            {
                pq_min_heap.pop();
            }
        }
        while(k--)
        {
            res.push_back(pq_min_heap.top().second);
            pq_min_heap.pop();
        }
        return res;
    }
};