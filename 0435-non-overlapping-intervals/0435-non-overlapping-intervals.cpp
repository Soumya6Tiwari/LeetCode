class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals)
    {
        // this question is similar to the ques N meetings in one room
        int n=intervals.size();
        
        // sort the given intervals according to the end point in comparator function
        sort(intervals.begin(), intervals.end(),[](vector<int>a, vector<int>b)
             {
                 return (a[1]<b[1]);
             });
            
            int count=1,free_time=intervals[0][1];
            int i,j,k;
        for(i=1;i<n;i++)
        {
            if(intervals[i][0]>=free_time)
            {
                count++;
                free_time=intervals[i][1];
            }
        }
        return n-count;
        
    }
};