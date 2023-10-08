class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> result;
        int i,j,k;
        double median=0.0,value;
        for(i=0;i<nums1.size();i++)
        {
            result.push_back(nums1[i]);
        }
         for(i=0;i<nums2.size();i++)
        {
            result.push_back(nums2[i]);
        }
        sort(result.begin(),result.end());
        int len=result.size();
        if(len%2!=0)
        {
            median=(double)(result[len/2]);
        }
        else
        {
            median=double((double(result[len/2]+result[(len/2)-1]))/2);
            
        }
        
        return median;
    }
};