class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) 
    {
        int lsum=0,rsum=0,max_sum,right_index=cardPoints.size()-1;
        int i,j;
        for(i=0;i<k;i++)
        {
            lsum=lsum+cardPoints[i];
        }
        max_sum=lsum;
        for(i=k-1;i>=0;i--)
        {
            lsum=lsum-cardPoints[i];
            rsum=rsum+cardPoints[right_index];
            right_index--;
            max_sum=max(max_sum,lsum+rsum);
        }
        return max_sum;
    }
};