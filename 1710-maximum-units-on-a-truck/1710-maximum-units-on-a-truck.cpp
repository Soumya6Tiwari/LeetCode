class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) 
    {
        int i,j,k,val;
        sort(boxTypes.begin(),boxTypes.end(),[](vector<int>a,vector<int>b)
             {
                 return a[1]>b[1];
             });
        int tot=0;
        for(i=0;i<boxTypes.size();i++)
        {
            if(boxTypes[i][0]<=truckSize)
            {
            tot=tot+(boxTypes[i][0]* boxTypes[i][1]);
               truckSize=truckSize-boxTypes[i][0]; 
            }
            else
            {
                
                 tot=tot+(truckSize* boxTypes[i][1]);
                break;
            }
            
        }
        return tot;
    }
};