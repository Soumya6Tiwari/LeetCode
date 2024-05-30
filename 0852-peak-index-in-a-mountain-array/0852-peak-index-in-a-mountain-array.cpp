class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int maxi=INT_MIN;
        int i,j,k,ans;
        for(i=0;i<arr.size();i++)
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
                ans=i;
            }
        }
        return ans;
        
    }
};