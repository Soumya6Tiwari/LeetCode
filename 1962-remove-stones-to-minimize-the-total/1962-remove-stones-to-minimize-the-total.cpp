class Solution {
public:
    int minStoneSum(vector<int>& piles, int k)
    {
        priority_queue<int>pq;
        int i,j,sum=0,val;
        for(i=0;i<piles.size();i++)
        {
            pq.push(piles[i]);
        }
        while(k>0)
        {
            val=pq.top()-(pq.top()/2);
            pq.pop();
            pq.push(val);
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