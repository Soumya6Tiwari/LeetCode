class Solution {
public:
    double trimMean(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        double i,j,k,start,end,num,sum=0;
        double val=arr.size();
        num=(5*val)/100;
        start=num;
        end=val-1-num;
        for(i=start;i<=end;i++)
        {
            sum=sum+arr[i];
            
        }
        num=val-(2*num);
        sum=sum/num;
        return sum;
        
    }
};