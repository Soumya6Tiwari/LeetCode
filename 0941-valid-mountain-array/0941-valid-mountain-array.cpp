class Solution {
public:
    bool validMountainArray(vector<int>& arr) 
    {
        int i,j,k,flag=0,flag1=0;
        if(arr.size()<3)
        {
            return false;
        }
        for(i=0;i<arr.size()-1;i++)
        {
            if(arr[1]<=arr[0])
            {
                return false;
            }
            if(arr[i+1]>arr[i])
            {
                flag=1;
                if(flag1==1)
                {
                    flag1=0;
                    break;
                }
            }
            else
            {
                
                if(arr[i+1]<arr[i])
                {
                    flag1=1;
                    
                }
                else
                {
                    return false;
                }
            }
        }
        if(flag==1&&flag1==1)
        {
            return true;
        }
        return false;
        
    }
};