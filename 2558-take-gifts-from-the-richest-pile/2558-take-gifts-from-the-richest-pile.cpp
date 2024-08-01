class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) 
    {
        priority_queue<long long>pq;
        int i,j;
        long long sum=0,sq;
        for(i=0;i<gifts.size();i++)
        {
            pq.push(gifts[i]);
        }
        while(k>0)
        {
            sq=sqrt(pq.top());
            if(!pq.empty())
            {
            pq.pop();
            }
            pq.push(sq);
            k--;
        }
        while(!pq.empty())
        {
            sum=sum+pq.top();
            pq.pop();
        }
        
        return sum;
        
    }
};