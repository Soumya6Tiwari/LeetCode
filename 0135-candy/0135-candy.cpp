class Solution {
public:
    int candy(vector<int>& ratings) 
    {
        // brute force approach
        vector<int>left,right;
        int i,j,k,sum=0,maxi=-1,val=1;
        
        // left neighbour
        left.push_back(1);
        for(i=1;i<ratings.size();i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                val++;
                left.push_back(val);
            }
            else if(ratings[i]<=ratings[i-1])
            {
                val=1;
                left.push_back(val);
            }
        }
        
        
        // right neighbor
        reverse(ratings.begin(),ratings.end());
        right.push_back(1);
        for(i=1;i<ratings.size();i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                val++;
                right.push_back(val);
            }
            else if(ratings[i]<=ratings[i-1])
            {
                val=1;
                right.push_back(val);
            }
        }
        reverse(right.begin(),right.end());
        for(i=0;i<left.size();i++)
        {
            maxi=max(left[i],right[i]);
            sum=sum+maxi;
        }
        return sum;
    }
};